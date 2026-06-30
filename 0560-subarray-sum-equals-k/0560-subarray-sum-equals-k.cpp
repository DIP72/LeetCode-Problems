class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int prefixSum = 0;
        int cnt = 0;
        for(auto x : nums){
            prefixSum += x;
            if(mpp.find(prefixSum - k) != mpp.end())
                cnt += mpp[prefixSum - k];
            mpp[prefixSum]++;
        }
        return cnt;
    }
};