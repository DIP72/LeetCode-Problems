#include <bits/stdc++.h>


// without negetive numbers
int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long sum = 0;
    int maxLen = INT_MIN;
    int n = a.size();
    int l = 0, r = 0;
    while(r < n){
        sum += a[r];
        while(sum > k){
            sum -= a[l];  
            l++;
        } 
        if(sum == k){
            int len = r - l + 1;
            maxLen = max(len, maxLen);
        }
        r++;
    }
    return maxLen;
}


// with negetive numbers
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& nums, int k) {
    unordered_map<long long, int> mp;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // Case 1: subarray from 0 to i
        if (sum == k) {
            maxLen = i + 1;
        }

        // Case 2: check if (sum - k) seen before
        if (mp.find(sum - k) != mp.end()) {
            maxLen = max(maxLen, i - mp[sum - k]);
        }

        // Store only first occurrence
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return maxLen;
}