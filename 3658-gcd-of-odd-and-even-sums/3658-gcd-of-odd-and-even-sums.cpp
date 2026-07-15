class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for(int i = 0; i < n; i++){
            sumOdd += i * 2 + 1;
            sumEven += i * 2 + 2;
        }
        return gcd(sumOdd, sumEven);
    }
};