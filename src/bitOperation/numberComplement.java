package bitOperation;
//对一个正整数取反（符号位除外），返回取反后的十进制数(这个要记住)
//5的二进制为101，取反后为010
public class numberComplement {
    static int solution_476(int num){
        int res=0,t=0;
        int temp;
        while(num>0){
            if((num&1)==1)temp=0;
            else temp=1;
            res+=temp<<t;
            num>>=1;
            t++;
        }
        return res;

    }
}
