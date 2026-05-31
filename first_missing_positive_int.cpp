#include <bits/stdc++.h>

int firstMissing(int arr[], int n)
{
    // Remove useless values
    for(int i = 0; i < n; i++){
        if(arr[i] <= 0 || arr[i] > n)
            arr[i] = n + 1;
    }

    // Mark existing numbers
    for(int i = 0; i < n; i++){
        int num = abs(arr[i]);

        if(num <= n){
            arr[num - 1] = -abs(arr[num - 1]);
        }
    }

    // Find first missing positive
    for(int i = 0; i < n; i++){
        if(arr[i] > 0)
            return i + 1;
    }

    return n + 1;
}