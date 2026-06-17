class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = t.length();
        int xorr = t[0];
        for(int i = 0; i < n; i++){
            xorr = xorr ^ s[i] ^ t[i+1];
        }
        return (char)xorr;
    }
};