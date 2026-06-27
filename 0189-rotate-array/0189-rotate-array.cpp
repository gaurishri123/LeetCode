class Solution {
public:
    void rotate(vector<int>& nums, int d) {
        int n=nums.size();
        d=d%n;
        vector<int> temp(d);

        //storing
        for(int i=n-d; i<n; i++){
            temp[i-(n-d)]=nums[i];
        }   

        //shifting
        for(int i=n-1; i>=d; i--){
            nums[i]=nums[i-d];
        }

    //putting the temp array to the beginning
        for(int i=0; i<d; i++){
            nums[i]=temp[i];
        }
    }
};