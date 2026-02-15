// My solution:
class Solution {
public:
    pair<int, int> roseRange(vector<int>&bloomDay){
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int n = bloomDay.size();
        for(int i = 0; i < n; i++){
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }
        return {mini, maxi};
    }

    bool possible(vector<int> &bloomDay, int d, int m, int k){
        int cnt = 0, noB = 0;
        int n = bloomDay.size();
        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= d) cnt++;
            else{
                noB += cnt/k;
                cnt=0;
            }
        }
        noB += cnt/k;
        if(noB >= m) return true;
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long)m*k > n) return -1;
        pair<int, int> range = roseRange(bloomDay);
        int low = range.first;
        int high = range.second;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(possible(bloomDay, mid, m, k)) high = mid-1;
            else low = mid + 1;
        }
        return low;
    }
};


// Alternative Solution:
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int low = 1, high = 1e9;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

private:
    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int day) {
        int total = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            int count = 0;
            while (i < bloomDay.size() && count < k && bloomDay[i] <= day) {
                count++;
                i++;
            }

            if (count == k) {
                total++;
                i--;
            }

            if (total >= m) {
                return true;
            }
        }

        return false;
    }
};