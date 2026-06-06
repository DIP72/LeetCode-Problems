class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int leftSum = 0, rightSum = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < n; i++){
            rightSum = sum - leftSum - nums[i];
            ans.push_back(abs(leftSum - rightSum));
            leftSum += nums[i];
        }
        return ans;
    }
};