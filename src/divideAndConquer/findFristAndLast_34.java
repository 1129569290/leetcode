package divideAndConquer;

public class findFristAndLast_34 {
    int[] searchRanger(int[] nums, int target){
        if(nums.length==0)return new int[]{-1,-1};
        int[] res = new int[2];
        int l=0,r=nums.length-1;
        while(l<r){//先找到第一个>=target的数
            int mid=l+r>>1;

            if(nums[mid]>=target)r=mid;
            else l=mid+1;

        }
        if(nums[l]!=target)return new int[]{-1,-1};
        res[0]=l;
        l=0;r=nums.length-1;
        while(l<r){//再找到第一个<=target的数
            int mid=l+r+1>>1;

            if(nums[mid]<=target)l=mid;
            else r=mid-1;

        }
        if(nums[l]!=target)return new int[]{-1,-1};
        res[1]=l;
        return res;
    }
}
