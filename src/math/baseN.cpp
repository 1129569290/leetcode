class Solution {
public:
    string convertToBase7(int num) {
        string res;
        bool neg=false;
        if(num<0){neg=true;num=-num;}
        else if(num==0)return "0";
        while(num){
            res+=to_string(num%7);
            num=num/7;
        }
        if(neg)res+='-';
        return string(res.rbegin(),res.rend());
    }
};