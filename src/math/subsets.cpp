class Solution {
public:
//无重复元素的子集
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        for(int i=0;i<(1<<nums.size());i++){、
        //1左移size位得到2的size次方，枚举0-2^(size)-1,
            vector<int> now;
            for(int j=0;j<nums.size();j++){
                if((i>>j)&1)now.push_back(nums[j]);
                //看当前数二进制哪个位置上有1，则将对应位置的数填充进去数组
            }
            res.push_back(now);
        }
        return res;
    }
};