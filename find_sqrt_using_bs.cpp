#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int findSqrtUsingBS(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0, high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int i = nums[mid];
            if(i * i <= target){
                ans = i;
                low = mid + 1;
            }
            else high = mid - 1;      
        }
        return ans;
    }
};