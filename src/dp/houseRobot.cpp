class houseRobot {
public:
    int solution_198(vector<int>& nums) {
        int n=nums.size();
        vector<int> d(n+1),p(n+1);//d表示选第i个数能取得的最大值，p[i]表示不选第i个数能取得的最大值
        for(int i=1;i<=n;i++){
            d[i]=p[i-1]+nums[i-1];//当前数选，前一个数必须是不选的
            p[i]=max(d[i-1],p[i-1]);        //当前数不选，从前面一个数的任意1个状态转移过来
        }
        return max(d[n],p[n]);
    }
};