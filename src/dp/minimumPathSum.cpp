class minimumPathSum {
public:
       int solution_64(vector<vector<int>>& grid) {
        int dp[500][500];
        memset(dp,0,sizeof(dp));
        dp[0][0]=grid[0][0];
        //初始化最左边的列
        for(int i=1;i<grid.size();i++)dp[i][0]=dp[i-1][0]+grid[i][0];
        //最上面的行
        for(int i=1;i<grid[0].size();i++)dp[0][i]=dp[0][i-1]+grid[0][i];
        for(int i=1;i<grid.size();i++)
            for(int j=1;j<grid[0].size();j++)
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
        return dp[grid.size()-1][grid[0].size()-1];
    }
};