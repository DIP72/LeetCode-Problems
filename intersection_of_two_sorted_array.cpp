#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionSortedArray(vector<int> &a, vector <int> &b){
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> intersectionArray;
    while(i < n1 && j < n2){
        if(a[i] < b[j]) i++;
        else if(a[i] > b[j]) j++;
        else{
            intersectionArray.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersectionArray;
}