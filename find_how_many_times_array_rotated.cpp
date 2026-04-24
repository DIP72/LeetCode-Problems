#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int mini = INT_MAX;
    int ind = -1;
	int low = 0;
	int high = arr.size() - 1;

	while(low <= high){
		int mid = low + (high - low) / 2;

		if(arr[low] <= arr[high]){
			if(arr[low] < mini){
                mini = arr[low];
                ind = low;
            }
			break;
		}

		// left array sorted
		if(arr[low] <= arr[mid]){
            if(arr[low] < mini){
                mini = arr[low];
                ind = low;
            }
			low = mid + 1;
		}

		// right array sorted
		else {
            if(arr[mid] < mini){
                mini = arr[mid];
                ind = mid;
            }
			high = mid - 1;
		}
	}
	return ind;   
}