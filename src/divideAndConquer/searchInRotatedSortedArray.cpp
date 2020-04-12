class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())return -1;
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=l+r>>1;
            if(nums[mid]>nums.back())l=mid+1;
            else r=mid;
        }
        if(target>nums.back()){r=l-1,l=0;}
        else r=nums.size()-1;
        while(l<r){
            int mid=l+r>>1;
            if(nums[mid]>=target)r=mid;
            else l=mid+1;
        }
        return nums[l]==target? l:-1;

    }
};