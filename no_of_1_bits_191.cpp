class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        if(!(n & n-1)) return true;
        return false;
    }
    int hammingWeight(int n) {
        if(isPowerOfTwo(n)) return 1;
        int bitsNo = log2(n);
        int cnt = 0;
        // for(int i = 0; i < bitsNo; i++){
        //     if(n & 1) cnt++;
        //     n = n >> 1;
        // }

        while(n != 0){
            if(n & 1) cnt++;
            n = n >> 1;
        }
        return cnt;
    }
};