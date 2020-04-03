class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<int>& nums,vector<int>&outs,vector<bool>& f ,int level){
        if(level==nums.size()){
            res.push_back(outs);
        }
        for(int i=0;i<nums.size();i++){
            if(f[i]==0){
                f[i]=1;
                outs.push_back(nums[i]);
                dfs(nums,outs,f,level+1);
                f[i]=0;
                outs.pop_back();

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> out;
        vector<bool> f(nums.size(),0);
        dfs(nums,out,f,0);
        return res;
    }
};