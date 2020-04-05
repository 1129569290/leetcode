class Solution {
public:
    double myPow(double x, int n) {
        long long p=n;
        if(p<0){
            x=1.0/x;
            p=-p;
        }
        double res=1.0;
        while(p){
            if(p&1)res=x*res;
            x*=x;
            p>>=1;
        }
        return res;

    }
};
//快速幂mod
int qmi(int a, int k)       // 快速幂模板
{
    int res = 1;
    while (k)
    {
        if (k & 1) res = (LL)res * a % p;
        a = (LL)a * a % p;
        k >>= 1;
    }
    return res;
}