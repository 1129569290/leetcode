package dp;

public class maxmumSubArray {
    int solution_53(int[] nums){
        int[] dp=new int[nums.length];
        dp[0]=nums[0];
        for(int i=1;i<nums.length;i++)
            dp[i]=Math.max(dp[i-1]+nums[i],nums[i]);

        int max=Integer.MIN_VALUE;
        for(int i=0;i<dp.length;i++)
            if(max<dp[i])
                max=dp[i];
        return max;
    }
}
