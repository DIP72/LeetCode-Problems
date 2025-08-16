// if there does not exist any right sided elements which are greater than 
// a particular element at an index, the element in that index is considered as 
// a leader

#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int> &nums){
    vector<int> leaders;
    int n = nums.size();
    int maxi = INT_MIN;
    for(int i = n-1; i > 0; i--){
        if(nums[i] > maxi)
            leaders.push_back(nums[i]);
        maxi = max(maxi, nums[i]);
    }
    return leaders;
}

int main(){
    int n, ele;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> ele;
        nums.push_back(ele);
    }

    vector<int> leaders = findLeaders(nums);
    for(auto it: leaders)
        cout << it << " ";

    return 0;
}