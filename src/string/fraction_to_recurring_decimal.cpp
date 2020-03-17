typedef long long ll;//做类型转换是因为
class Solution {
public:
    string fractionToDecimal(int dnumerator, int ddenominator) {
        ll numerator=dnumerator;
        ll denominator=ddenominator;
        string res;
        bool minus=false;
        if(numerator<0)minus=!minus,numerator=-numerator;//这里最小的int值无法取到相反数
        if(denominator<0)minus=!minus,denominator=-denominator;
        res+=to_string(numerator/denominator);
        ll n=numerator%denominator;
        if(n==0){
            if(minus && res != "0") return '-'+res;//0不用添加符号
            else return res;
        }
        res+='.';
        unordered_map<int,int> hash;
        //记录下余数第一次出现和第二次出现的时候的长度
        while(n){
            if(hash[n]){
                //为了加上括号
                res=res.substr(0,hash[n])+'('+res.substr(hash[n])+')';
                break;
            }
            hash[n]=res.size();
            n=n*10;
            res+=to_string(n/denominator);
            n=n%denominator;
        }
        if(minus==true)res='-'+res;
        return res;

    }
};