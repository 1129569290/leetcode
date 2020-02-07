package array;

public class maxContainer {
    public static void main(String args[]){
        int[] h ={1,8,6,2,5,4,8,3,7};
        System.out.println(maxArea(h));
    }
    public static int maxArea(int[] height){
        int maxarea=0;
        int letf=0,right=height.length-1;
        while(right>letf){
            maxarea=Math.max(maxarea,(right-letf)*Math.min(height[right],height[letf]));
            if(height[letf]<=height[right])
                letf++;
            else
                right--;


        }
        return maxarea;
    }
}
