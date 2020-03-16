class triangle {
public:
    int dp[500][500];
    int solution_120(vector<vector<int>>& triangle) {
         if(triangle.size()==1)return triangle[0][0];
         memset(dp,-1,sizeof(dp));
        dp[0][0]=triangle[0][0];

         for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j==0)
                    dp[i][j]=dp[i-1][0]+triangle[i][j];
                else if(j==triangle[i].size()-1)
                    dp[i][j]=dp[i-1][triangle[i-1].size()-1]+triangle[i][j];
                else{
                    dp[i][j]=min(dp[i-1][j-1]+triangle[i][j],dp[i-1][j]+triangle[i][j]);
                }

            }
         }
        int res=INT_MAX;
        for(int i=0;i<triangle[triangle.size()-1].size();i++)
            if(dp[triangle.size()-1][i]<res)
                res=dp[triangle.size()-1][i];
        return res;
    }
};