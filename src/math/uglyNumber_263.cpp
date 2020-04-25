class Solution {
public:
    bool isUgly(int num) {
        int d[]={2,3,5};
        for(auto prime:d){
            while(num%prime==0&&num>0)num=num/prime;
        }
        return num==1;
    }
};