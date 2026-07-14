class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        int rsum = 0;
        int maxSum = INT_MIN;
        for(int i = 0;i<k;i++){
            lsum += cardPoints[i];
            maxSum = lsum;
        }
        int rIdx = n-1;
        for(int i= k-1;i>=0;i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rIdx];
            maxSum = max(maxSum, lsum+rsum);
            rIdx--;
        }
        return maxSum;
    }
};