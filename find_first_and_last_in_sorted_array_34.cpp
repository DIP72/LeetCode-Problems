#include <bits/stdc++.h>
class Solution {
public:
    int first(vector<int> nums, int target){
        int firstt = -1;
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                firstt = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return firstt;
    }
    int last(vector<int> nums, int target){
        int lastt = -1;
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                lastt = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return lastt;
}


    vector<int> searchRange(vector<int>& nums, int target) {
        int firstt = first(nums, target);
        if(firstt == -1) return {-1, -1};
        int lastt = last(nums, target);
        return {firstt, lastt};
    //     int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    //     if(lb == nums.size() || nums[lb] != target) return {-1, -1};
    //     int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

    //     return {lb, ub-1};

    }
};