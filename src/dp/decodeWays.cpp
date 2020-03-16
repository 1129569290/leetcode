class decodeWays {
//两个字符打包的情况是处理的难点
public:
    int solution_91(string s) {
        int n=s.size();
        vector<int> dp(n);//下标从1开始到第i个字符能解码而成的字符串的个数
        /*dp[0]=1;//精髓在于去这个dp[0]
        for(int i=1;i<n+1;i++){
            if(s[i-1]!='0')dp[i]+=dp[i-1];
            if(i>=2){
                int c=(s[i-2]-'0')*10+(s[i-1]-'0');
                if(c>=10&&c<=26)
                    dp[i]+=dp[i-2];
            }
        }*/

        if(s[0]!='0')dp[0]=1;
        for(int i=1;i<n;i++){
            if(s[i]!='0')dp[i]+=dp[i-1];
            int c=(s[i-1]-'0')*10+(s[i]-'0');
            if(i==1&&c>=10&&c<=26)dp[i]+=1;
            if(i>=2&&c>=10&&c<=26)dp[i]+=dp[i-2];
        }
        return dp[n-1];
    }
};