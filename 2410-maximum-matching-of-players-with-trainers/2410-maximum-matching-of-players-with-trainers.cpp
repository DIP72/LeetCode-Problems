class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int player = players.size();
        int trainer = trainers.size();
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int p = 0, t = 0, cnt = 0;
        while(p < player && t < trainer){
            if(players[p] <= trainers[t]){
                cnt++, p++;
            }
            t++;
        }
        return cnt;
    }
};