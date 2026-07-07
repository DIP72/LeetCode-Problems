class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int m = grid[0].size();
        bool isTake = true;
        for(int i = 0; i < n; i++){
            if(i & 1){
                for(int j = m-1; j >= 0; j--){
                    if(isTake) ans.push_back(grid[i][j]);
                    isTake = !isTake;
                }
            }
            else {
                for(int j = 0; j < m; j++){
                    if(isTake) ans.push_back(grid[i][j]);
                    isTake = !isTake;
                }
            }
        }
        return ans;
    }
};