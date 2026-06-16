class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long nn = n;
        if(n < 0) nn = -1 * nn;
        while(nn){
            if(nn & 1){
                ans = ans * x;
                nn--;
            }
            else{
                x = x * x;
                nn = nn / 2;
            }
        }
        if(n < 0) ans = 1.0 / (double) ans;
        return ans;
    }

};