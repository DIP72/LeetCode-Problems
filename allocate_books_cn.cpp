#include <bits/stdc++.h>

bool isPossible(vector<int> &arr, int cap, int m){
    int n = arr.size();
    int pages = 0;
    int studCnt = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] > cap) return false;
        if(pages + arr[i] > cap){
            studCnt++;
            pages = arr[i];
        }
        else pages += arr[i];
    }
    if(studCnt > m) return false;
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m > n) return -1;
    // sort(arr.begin(), arr.end());
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(isPossible(arr, mid, m)) high = mid - 1;
        else low = mid + 1;
    }    
    return low;
}