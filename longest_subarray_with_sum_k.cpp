#include <bits/stdc++.h>

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