class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        long long MOD = 1e9 + 7;
        
        // We need to calculate C(n - 1 + k, k)
        // To optimize loop iterations, we use C(N, R) = C(N, N - R) if needed
        int N = n - 1 + k;
        int R = std::min(k, n - 1);
        
        long long numerator = 1;
        long long denominator = 1;
        
        for (int i = 1; i <= R; ++i) {
            numerator = (numerator * (N - i + 1)) % MOD;
            denominator = (denominator * i) % MOD;
        }
        
        // Result is (numerator * modular_inverse(denominator)) % MOD
        return (numerator * power(denominator, MOD - 2, MOD)) % MOD;
    }
private:
    // Helper function for modular exponentiation: (base^exp) % mod
    long long power(long long base, long long exp, long long mod) {
        long long res = 1;
        base %= mod;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return res;
    }
};