package bitOperation;
//数组中其余数字只出现一次，其余出现三次
public class singleNumber_2 {
    static int solution_137(int[] nums){
        int res=0;
        for(int bit=0;bit<32;bit++){
            int count=0;
            for(int i=0;i<nums.length;i++){
                count+=(nums[i]&1)>>bit;
            }
            count%=3;
            res+=count>>bit;
        }
        return res;
    }
}
