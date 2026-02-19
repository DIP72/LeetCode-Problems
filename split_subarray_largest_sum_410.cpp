#include <bits/stdc++.h>
class Solution {
public:
    int findMinSubarray(vector<int> nums, int cap){
        int n = nums.size();
        int summ = 0, noOfArray = 1;
        for(int i = 0; i < n; i++){
            if(summ + nums[i] <= cap)
                summ += nums[i];
            else{
                noOfArray++;
                summ = nums[i];
            }
        }
        return noOfArray;
    }

    int splitArray(vector<int>& nums, int k) {
       int n = nums.size();
       if(k > n) return -1;
       int low = *max_element(nums.begin(), nums.end());
       int high = accumulate(nums.begin(), nums.end(), 0);
       while(low <= high){
        int mid = low + (high - low) / 2;
        if(findMinSubarray(nums, mid) > k) low = mid + 1;
        else high = mid - 1;
       } 
       return low;
    }
};