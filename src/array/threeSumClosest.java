package array;
import java.util.*;
public class threeSumClosest {
    public int Solution(int[] nums, int target) {
        Arrays.sort(nums);
        int sum = Integer.MAX_VALUE;
        int maxDiff = Integer.MAX_VALUE;
   //     int temp=nums[0] ;
        for (int i = 0; i < nums.length-2; i++) {
            int lo=i+1,hi=nums.length-1;
            while(lo<hi) {
                int tempSum= nums[i] + nums[lo]+nums[hi];
                int tempDiff= Math.abs(tempSum - target);
                if (tempDiff<maxDiff) {
                    maxDiff=tempDiff;
                    sum = tempSum;
                }
                if(tempSum > target) hi--;
                else if (tempSum <target) lo++;
                else{
                    return target;
                }
            }
        }
        return sum;
    }
}

