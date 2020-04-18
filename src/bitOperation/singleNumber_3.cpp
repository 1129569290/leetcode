class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2,0);
        int s=0;
        for(auto n: nums)s^=n;
        s&=(-s);//取到s二进制的第一个1
        for(auto c:nums){
            if(c&s){
                res[0]^=c;
            }
            else res[1]^=c;
        }
        return res;
    }
};