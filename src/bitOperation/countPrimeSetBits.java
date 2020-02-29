package bitOperation;

public class countPrimeSetBits {
    public int solution_762(int L,int R){
        int count=0;
        for(int i =L; i<=R; i++) {
            int res=0;
            for(int j=i; j>0 ;j>>=1)res+=(j&1);
            if(isPrime(res))count++;

        }
        return count;
    }
     boolean isPrime(int x ){
        return (x==2||x==3||x==5||x==7||x==11||x==13||x==17||x==19);
    }
}
