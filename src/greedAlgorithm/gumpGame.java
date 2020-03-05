package greedAlgorithm;
//这个思路有点灵活吗，记录一个最大距离，遍历数组去找这个最大距离，最后判断是
//否能跳过去
//贪心：每到一个位置，就尽最大可能看看能走的更远的位置
public class gumpGame {
    boolean solution_55(int[] nums){
        int dis=0;
        for(int i=0;i<nums.length&&i<=dis;i++)//走不过去了，没必要在走了
            dis=Math.max(dis,i+nums[i]);
        return dis>=nums.length-1;
    }
}
