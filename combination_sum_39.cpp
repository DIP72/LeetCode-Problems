class Solution {
public:
    void backtrack(vector<int>& nums,int target,int ind,vector<int> &res,vector<vector<int>> &ans)
    {
        if(target==0){
            ans.push_back(res);
            return;
        }
        
        if(ind>=nums.size())
           return;
        if(target<0)
           return;
        backtrack(nums,target,ind+1,res,ans);
     
        res.push_back(nums[ind]);
        backtrack(nums,target-nums[ind],ind,res,ans);
        res.pop_back();     
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        backtrack(candidates,target,0,res,ans);      
    
        return ans;
    }
};

// class Solution {
// public:
//     void findCombination(int idx, int target, vector<int> candidates, vector<vector<int>> &ans, vector<int> &ds){
//         if(idx == candidates.size()){
//             if(target == 0) ans.push_back(ds);
//             return;
//         }

//         if(candidates[idx] <= target){
//             ds.push_back(candidates[idx]);
//             findCombination(idx, target-candidates[idx], candidates, ans, ds);
//             ds.pop_back();
//         }

//         findCombination(idx+1, target, candidates, ans, ds);
//         return;
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> ds;
//         findCombination(0, target, candidates, ans, ds);
//         return ans;
//     }
// };