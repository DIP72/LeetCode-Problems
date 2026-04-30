#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>v)
{
    int n = v.size();
    vector<vector<int>> ans;

    int nos = 1 << n;
    for(int i = 0; i < nos; i++){
        vector<int> s;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)) 
                s.push_back(v[j]);
        }
        ans.push_back(s);
    }
    return ans;
}