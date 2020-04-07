class Solution {
//含重复元素的子集
public:
    int n;
    vector<vector<int>> res;
    vector<int> out;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        n=nums.size();
        dfs(nums,0);
        return res;

    }

    void dfs(vector<int>&nums ,int u){//u是当前的数
        if(u==n){                   //要处理的数到了结尾
            res.push_back(out);
            return ;
        }
        int k=0;
        while(u+k<n&&nums[u+k]==nums[u])k++;//计算当前数的个数
        for(int i=0;i<=k;i++){             //将当前数的个数从0开始枚举
            dfs(nums,u+k);                //处理下一个数，形成组合
            out.push_back(nums[u]);
        }
        //恢复现场
        for(int i=0;i<=k;i++)out.pop_back();//枚举完一个数的情况就开始做


    }
};