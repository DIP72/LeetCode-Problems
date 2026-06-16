#include <bits/stdc++.h>

// approach I
int elementThatAppearsOnce(vector<int> arr) {
	int n = arr.size();
	int ans = 0;
	for(int i = 0; i < 32; i++){
		int cnt = 0;
		for(int j = 0; j < n; j++)
			if(arr[j] & (1 << i)) cnt++;
		if(cnt%3) 
			ans = ans | (1 << i);
	}
	return ans;
}

// approach II
int elementThatAppearsOnce(vector<int> arr) {
    int n = arr.size();
    int ones = 0, twos = 0;
    for(int i = 0; i < n; i++){
        ones = (ones ^ arr[i]) & ~twos;
        twos = (twos ^ arr[i]) & ~ones;
    }
    return ones;
}