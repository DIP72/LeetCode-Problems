class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l=0,r=nums.size()-1;
        int idx=nums.size()-1;
        while(l<=r){
            if(abs(nums[r])>abs(nums[l])){
                ans[idx]=(nums[r]*nums[r]);
                r--;
                idx--;
            }else{
                ans[idx]=(nums[l]*nums[l]);
                l++;
                idx--;
            }
        }
        return ans;
    }
};