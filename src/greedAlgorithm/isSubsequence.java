package greedAlgorithm;
//判断字符串s是否为b的子序列，例如s为adf,t为abcdefg，则返回true;
//基本思路是每个字符串上一个指针，移动t上的指针，当pt和ps位置上的值相等，就移动ps
//最后判断ps是否移动到了最后，集ps是否等于s的长度
public class isSubsequence {
    boolean solution_392(String s,String t){
        int j=0;
        for(int i=0;i<t.length()&&j<s.length();i++){
            if(t.charAt(i)==s.charAt(j))
                j++;
        }
        return j==s.length();
    }
}
