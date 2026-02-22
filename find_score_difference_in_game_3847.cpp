#include <bits/stdc++.h>

enum Player{
    First,
    Second
};

class Solution {
public:
    void playerSwap(Player &player){
        if(player == First) player = Second;
        else player = First;
        return;
    }

    int scoreDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> playerScore(2, 0);
        Player player = First;
        for(int i = 0; i < n; i++){
            if(nums[i]&1) playerSwap(player);
            if((i+1)%6 == 0) playerSwap(player);
            playerScore[player] += nums[i];
        }

        return playerScore[0] - playerScore[1];  
    }
};