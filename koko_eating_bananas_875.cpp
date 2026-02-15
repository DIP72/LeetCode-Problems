#include <bits/stdc++.h>
class Solution {
public:
    int findMax(vector<int> piles){
        int maxEle = INT_MIN;
        int n = piles.size();
        for(int i = 0; i < n; i++)
            maxEle = max(maxEle, piles[i]);
        return maxEle;
    }

    long long totalH(vector<int> piles, int hour){
        long long totalHour = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++){
        //    totalHour += ceil((double)piles[i] / (double)hour);
           totalHour += (piles[i] + hour - 1) / hour;
        //    totalHour += floor(((double)piles[i] + (double)hour - 1) / (double)hour);
        }
        return totalHour;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        int ans = high;
        while(low <= high){
            int mid = (low + high) / 2;
            // long long totalHour = totalH(piles, mid);
            if(totalH(piles, mid) <= h){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};