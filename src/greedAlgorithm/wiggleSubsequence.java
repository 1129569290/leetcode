package greedAlgorithm;
import java.util.*;
//环形数组，找局部最大值
//哈希表不能保证原来的顺序
public class wiggleSubsequence {
    static  int soluation_376(int[] nums){
        Set<Integer> s=new LinkedHashSet<>();
        for(int i=0;i<nums.length;i++)
            s.add(nums[i]);
        Object[] temp=s.toArray();
        //System.out.println(temp.length);
        int[] newNums=new int[temp.length];
        for(int i=0;i<temp.length;i++)
            newNums[i]=Integer.parseInt(temp[i].toString());
        if(newNums.length<=2)return newNums.length;
        int res=2;
        //System.out.println(newNums.length);
        for(int i=1;i<newNums.length-1;i++){
            System.out.println(newNums[i]);
            if(newNums[i-1]<newNums[i]&&newNums[i+1]<newNums[i])res++;
            if(newNums[i-1]>newNums[i]&&newNums[i+1]>newNums[i])res++;
            //System.out.println(res);
        }
        return res;
    }
    public static  void main(String[] args){
        int[] a=new int[]{1,17,5,10,13,15,10,5,16,8};
        System.out.println(soluation_376(a));
    }

}
