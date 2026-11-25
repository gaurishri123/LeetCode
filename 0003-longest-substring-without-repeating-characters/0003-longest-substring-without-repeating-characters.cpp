class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int len=0;
        int r=0;
        int l=0;
        int maxCnt=0;
        int hash[256];
        for(int i=0; i<256; i++){
            hash[i]={-1};
        }
        while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            len=r-l+1;
            hash[s[r]]=r;
            maxCnt=max(maxCnt,len);
            r++;

        }
        return maxCnt;
    }
};