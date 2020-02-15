package array;

import java.util.*;

public class threeSum {
    public static List<List<Integer>> three_sum(int[] nums){
        Arrays.sort(nums);
        List<List<Integer>> res =new ArrayList<>();
        for (int i =0 ; i<nums.length; i++) {
            //如果当前数值大于0，则不需要在进行
            if (nums[i]>0) break;
            //跳过相同的数字
            if(i == 0 ||(i>0&&nums[i] != nums[i-1])){
                int lo= i + 1, hi=nums.length - 1, sum = 0 -nums[i];
                while (lo < hi) {
                    if (nums[lo] + nums [hi] == sum) {
                        res.add(Arrays.asList(nums[i], nums[lo],nums[hi] ));
                        while (lo < hi&& nums[lo] == nums[lo+1]) lo++;
                        while (lo < hi&& nums[hi] == nums[hi-1]) hi--;
                        lo++;
                        hi--;
                    }else if (nums[lo] + nums [hi] <sum)lo++;
                    else hi --;
                }

                }
        }
        return res;

        }

}

