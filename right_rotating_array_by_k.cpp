#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i < size; i++){
        int ele;
        cin >> ele;
        arr[i] = ele;
    }

    int k;
    cin >> k;
    vector<int> rightRotateArr = rotateArray(arr, k);
    for(int i : rightRotateArr)
        cout << i << " ";
    return 0;
}