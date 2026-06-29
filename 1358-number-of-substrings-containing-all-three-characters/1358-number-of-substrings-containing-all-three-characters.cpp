class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> ch(3, -1);
        int n = s.length();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            ch[s[i] - 'a'] = i;
            if(ch[0] != -1 && ch[1] != -1 && ch[2] != -1)
                cnt += (1 + *min_element(ch.begin(), ch.end()));
        }
        return cnt;
    }
};