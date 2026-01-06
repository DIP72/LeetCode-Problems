#include <bits/stdc++.h>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        long long int size = nums.size();
        if(size == 0) return;
        k = k % size;
        reverse(nums.begin(), nums.begin() + size - k);
        reverse(nums.begin() + size - k, nums.end());
        reverse(nums.begin() , nums.end());
    }
};