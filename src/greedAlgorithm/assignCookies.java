package greedAlgorithm;

import java.util.Arrays;

public class assignCookies {
    int  solutin_455(int[] g,int[] s){
        Arrays.sort(g);
        Arrays.sort(s);
        int res=0;
        int j=0,i=0;
        for(;j<s.length&&i<s.length;j++){
            if(s[j]>=g[i]){
                res++;
                i++;
            }
        }
        return res;
    }
}
