class Solution {
public:

    // My solution with helper function to find number of days required for a given capacity
    int findDays(vector<int>&weights, int cap){
        int noOfDays = 1, load = 0;
        int n = weights.size();
        for(int i = 0; i < n; i++){
            if(load + weights[i] > cap){
                noOfDays++;
                load = weights[i];
            }
            else
                load += weights[i];
        }
        return noOfDays;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for(int ele: weights)
            high += ele;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int noOfDays = findDays(weights, mid);
            if(noOfDays <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }


    // Another solution without helper function
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int n = weights.size();
        while(low <= high){
            int mid = low + (high - low) / 2;
            int currDays = 1; int load = 0;
            for(int i = 0; i < n; i++){
                if(load + weights[i]> mid){
                    currDays += 1;
                    load = weights[i];
                }
                else
                    load += weights[i];
            }
            if(currDays <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};