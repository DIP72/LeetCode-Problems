class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int len = nums.size();
        int ele;
        for(int i = 0; i < len; i++){
            if(cnt == 0){
                ele = nums[i];
                cnt++;
            }
            else if(ele == nums[i]) cnt++;
            else cnt--;
        }
        return ele;
    }
};