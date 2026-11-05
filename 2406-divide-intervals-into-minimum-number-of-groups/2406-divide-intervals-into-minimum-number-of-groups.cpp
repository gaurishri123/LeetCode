class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int> arrival;
        vector<int> departure;

        for(int i=0; i<n; i++){
            arrival.push_back(intervals[i][0]);
            departure.push_back(intervals[i][1]);
        }

        sort(arrival.begin(), arrival.end());
        sort(departure.begin(), departure.end());

        int i=0;
        int j=0;
        int cnt=0;
        int maxCnt=0;
        while(i<n && j<n){
            if(arrival[i]<=departure[j]){
                cnt+=1;
                i++;
            }else{
                cnt-=1;
                j++;
            }
            maxCnt=max(maxCnt,cnt);
        }
        return maxCnt;
    }
};