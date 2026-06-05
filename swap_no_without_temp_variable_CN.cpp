#include <bits/stdc++.h> 
vector<int> swapNumber(int x, int y) {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    return {x, y};
}
