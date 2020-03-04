package string;
//从1开始，11（第一行是一个一），21（第二行是两个1），1211（第三行是1个2，1个1）
//输入为n，给出第n行的字符串
public class countAndSay {
    public static void main(String[] args){
        String s = "dsadas ";
        groupAnagram a = new groupAnagram();
        System.out.println(a.sortString(s));
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
