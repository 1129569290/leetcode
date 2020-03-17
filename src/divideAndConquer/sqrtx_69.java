package divideAndConquer;

public class sqrtx_69 {
    public int mySqrt(int x) {
        long l=0,r=x;
        while(l<r){
            long mid=  l + r +1 >> 1;
            if(mid<=x/mid)l=mid;
            else r=mid-1;
        }
        return (int)r;

        }

}
