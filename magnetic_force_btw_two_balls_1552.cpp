// my solution
class Solution {
public:
    bool isPlace(vector<int>&position, int dist, int m){
        int cnt = 1, last = position[0];
        int n = position.size();
        for(int i = 1; i < n; i++){
            if(position[i] - last >= dist){
                cnt++;
                last = position[i];
            }
            if(cnt >= m) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int high = position[n-1] - position[0];
        int low = 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(isPlace(position, mid, m)) low = mid + 1;
            else high = mid - 1;
        }
        return high;
    }
};