class Solution {
public:

    // int bs(vector<int>& nums, int high, int low, int target){
    //     if(low <= high){
    //         int mid = (low + high) / 2;
    //         if(nums[mid] == target) return mid;
    //         else if(nums[mid] > target) return bs(nums, mid-1, low, target);
    //         else return bs(nums, high, mid+1, target);
    //     }
    //     else
    //         return -1;
    // }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};