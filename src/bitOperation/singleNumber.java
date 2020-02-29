package bitOperation;
//找出一个数组中只出现一次的数，其他默认出现了两次
public class singleNumber {
    int  solution_136(int[] nums){
        int res = 0;
        for(int i=0;i<nums.length;i++)res^=nums[i];
        return res;
    }
}
