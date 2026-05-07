#include <bits/stdc++.h> 

int maximumPoints(int n, vector<vector<int>> &grid)
{
    int points = 0;
    for(int i = 0; i < n; i++){
        points += grid[i][i] + grid[i][n-i-1];
    }
    if(n & 1)
        points -= grid[n/2][n/2];
    return points;
}