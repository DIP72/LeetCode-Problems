#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector <int> unionArray;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArray.size() == 0 || unionArray.back() != a[i])
                unionArray.push_back(a[i]);
            i++;
        }
        else{
            if(unionArray.size() == 0 || unionArray.back() != b[j])
                unionArray.push_back(b[j]);
            j++;
        }
    }
}