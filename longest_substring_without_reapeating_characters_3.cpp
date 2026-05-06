#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = INT_MIN;
        int l = 0;
        int r = 0;
        int n = s.size();
        if(n == 0) return 0;

        vector<int> hash(255, -1);

        while(r < n){
            if(hash[s[r]] != -1 && hash[s[r]] >= l)
                l = hash[s[r]] + 1;
            int len = r - l + 1;
            maxLen = max(len, maxLen);
            hash[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};