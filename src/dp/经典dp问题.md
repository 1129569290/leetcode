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
