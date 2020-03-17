package divideAndConquer;

public class searchInsertPosition_35 {

    public int searchInsert(int[] nums, int target) {
        if(nums.length==0||nums[nums.length-1]<target)return nums.length;
        int l=0,r=nums.length-1;
        while(r>l){
            int mid = l+r >>1;
            if(nums[mid]>=target)r=mid;
            else l=mid+1;
        }
        return r;

        }

}
