class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        for(auto item : patterns){
            if(word.find(item) != string::npos)
                ans++;
        }
        return ans;
    }
};