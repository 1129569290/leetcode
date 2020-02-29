package bitOperation;

public class powerOfTwo {
    public boolean solution231(int n){
        return n>0&&(1<<30)%n==0;
        //return n>0 && (n & -n)==n;
    }
}
