class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        if(k >= n) return accumulate(cardPoints.begin(), cardPoints.end(), 0);
        int maxSum = 0;
        for(int i = 0; i < k; i++)
            maxSum += cardPoints[i];

        int lSum = maxSum;
        int rInd = n-1;
        int rSum = 0;
        for(int i = k-1; i >= 0; i--){
            lSum = lSum - cardPoints[i];
            rSum = rSum + cardPoints[rInd--];
            maxSum = max(maxSum, lSum + rSum);
        }
        return maxSum;
    }
};