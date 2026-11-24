class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int rightSum=0;
        int leftSum=0;
        int maxSum=0;

        for(int i=0; i<=k-1; i++){
            leftSum+=cardPoints[i];

        }
        maxSum=leftSum;
        int right=n-1;

        for(int i=k-1; i>=0; i--){
            leftSum-=cardPoints[i];
            rightSum+=cardPoints[right];
            right--;

            maxSum=max(maxSum,rightSum+leftSum);
        }
        return maxSum;
    }
};