class Solution {
//含有重复元素的排列
public:
    //枚举每个数放到哪一个位置
    //关键是保持相同数字的相同位置不变。
    int n;
    vector<vector<int>> res;
    vector<int> v;
    vector<bool> used;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        v=vector<int>(n);
        used = vector<bool>(n);
        sort(nums.begin(),nums.end());
        dfs(nums,0,0);
        return res;
    }
    void dfs(vector<int> &nums,int u,int begin){//u代表即将要处理的数的下标，begin代表可以从哪个位置进行搜索下一个数
        if(u==n){
            res.push_back(v);
            return ;
        }
        for(int i=begin;i<n;i++){
            if(used[i]==false){//第i个位置没放数
                used[i]=true;
                v[i]=nums[u];//
                dfs(nums,u+1, u+1<n&&nums[u]==nums[u+1]? i+1:0);//如果相邻两个数字相等，那么下一个放置的位置就必须比当前位置大
                used[i]=false;
            }
        }


    }
};