class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int greed = g.size();
        int cookie = s.size();
        int l = 0; 
        int m = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(l < greed && m < cookie){
            if(g[l] <= s[m])
                l++;
            m++;
        }       
        return l;
    }   
};