class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        int max = 0, min = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                min++;
                max++;
            }
            else if(s[i] == ')'){
                min--;
                max--;
            }
            else {
                min--;
                max++;
            }
            if(min < 0) min = 0;
            if(max < 0) return false;
        }
        return min == 0;
    }
};