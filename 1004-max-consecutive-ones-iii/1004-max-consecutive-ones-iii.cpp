class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=0;
        int maxCnt=0;
        int zeroes=0;
        while(r<n){
            if(nums[r]==0){
                zeroes+=1;
            }
            if(zeroes>k){
                if(nums[l]==0){
                    zeroes-=1;
                }
                l++;
            }
            if(zeroes<=k){
                maxCnt=max(maxCnt,r-l+1);
            }
            r++;
        }
        return maxCnt;
    }
};