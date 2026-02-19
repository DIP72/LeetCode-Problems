class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(k < arr[0]) return k;
        int low = 0;
        int high = arr.size()-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int missing = arr[mid] - mid - 1;
            if(missing >= k)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low + k;
    }
};