# 经典动态规划问题

## 1. 最长上升子序列

思路：dp[i]    状态表示以下标i结尾的子串，属性为该字串的最长上升子序列

```c++
for(int i=0; i<n ;i++){
    dp[i]=1;
    for(int j=0 ;j<i ;j++)
        if(nums[j]<nums[i])
            dp[i]=max(dp[i],dp[j]+1)
}
```

## 2. 最长公共子序列

1. 状态表示：dp[i][j] 串A中以i下标结尾的字串和串B中以j下标为结尾的子串 两个字串公共子序列的最大长度
2. 转移方法：
   2.1 如果A[i]与B[j]不相等，

   `dp[i][j]=max(dp[i-1][j],dp[i][j-1])`
   2.2 如果A[i]与B[j]相等，

   `dp[i][j]=max(dp[i-1][j-1]+1,dp[i][j])`
3. 代码

   ```c++
   dp[0][0]=0;
   for(int i=1 ;i<=n ; i++)
        for(int j=1 ;j<=m ;j++){
            if(A[i]==B[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
            }
        }
   ```

## 3. 正则表达式匹配

思路: 应该从后向前匹配,关键是模式串和文本串最后的空格一定为true;

1. 状态表示：dp[i][j] 模式串str从下标i到串结束位置 和匹配串pat从下标i到串结束位置的字串
2. 属性 ：以上两个串是否能匹配
3. 状态转移：如果str[i]==pat[j],则dp[i][j]=dp[i+1][j+1],如果pat[j+1]='*',那么dp[i][j]=dp[i][j+2]
4. 代码：

   ```c++
   dp[i][j]=true; //两个串结尾的空串一定能匹配
   for(int i = n;i>=0;i--)
    for(int j=m-1; j>=0;j--){
        bool firstMatch = i<n && (str[i]==pat[j]||pat[j]==*);
        if(j+1 < m && pat[j+1] == '*'){
            dp[i][j] = dp[i][j+2]||(firstMatch&&dp[i+1][j]//匹配0个或者多个 例如c a*c 或者aaac a*c
        }else{
            dp[i][j] = firtsMatch&&dp[i+1][j+1];//通常情况下，要保证之前已经匹配完成
        }
    }
    return dp[0][0]


   ```
