package string;

public class countAndSay {
    public static void main(String[] args){
        System.out.print(solution_36(3));
    }
    static String solution_36(int n){
        //if(n==1)return "1";
        StringBuffer res = new StringBuffer("1");
        while(n>1){
            StringBuffer newRes = new StringBuffer();
            for (int i = 0;i<res.length();){
                int j=i;
                while(j<res.length() && res.charAt(i)==res.charAt(j))j++;
                newRes.append(j-i);
                newRes.append(res.charAt(i));
                i=j;
            }
            res = newRes;
        }
        return res.toString();

    }
}
