class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;
        for(auto word : words){
            int totalWeight = 0;
            for(int i = 0; i < word.size(); i++)
                totalWeight += weights[word[i] - 'a'];
            totalWeight %= 26;
            ans += ('z' - totalWeight); 
        }
        return ans;
    }
};