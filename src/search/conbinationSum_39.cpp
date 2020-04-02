class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> way;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,way,0);
        return res;
    }
    void dfs(vector<int>& nums,int target,vector<int> &way,int begin){
        if(target==0){
            res.push_back(way);
            return;
        }

        for(int i=begin;i<nums.size()&&nums[i]<=target;i++){
            way.push_back(nums[i]);
            dfs(nums,target-nums[i],way,i);//这个i保证了是以递增序列去搜索
            way.pop_back();
        }

    }



};