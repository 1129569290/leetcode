/*
这种按某种形状打印字符的题目，一般通过手画小图找规律来做。
我们先画行数是4的情况：
0     6       12
1   5 7    11 13
2 4   8 10    14
3     9       15

从中我们发现，对于行数是 nn 的情况：
1. 对于第一行和最后一行，是公差为 2(n−1) 的等差数列，首项是 0 和 n−1；
2. 对于第 i 行(0<i<n−1)，是两个公差为 2(n−1) 的等差数列交替排列，首项分别是 i 和 2(n-1)-i
所以我们可以从上到下，依次打印每行的字符。

时间复杂度分析：每个字符遍历一遍，所以时间复杂度是O(n)O(n)

*/






class zigzagConversion {
public:
    string solution_5(string s, int numRows) {
        if(numRows==1)return s;
        string res;
        for(int i=0;i<numRows;i++){
            if(i==0||i==numRows-1){
                for(int j=i;j<s.size();j+=2*(numRows-1))
                    res+=s[j];
            }
            else{
                for(int j=i,k=2*(numRows-1)-i;
                   j<s.size()||k<s.size();
                   j+=2*(numRows-1),k+=2*(numRows-1)){
                    if(j<s.size())res+=s[j];
                    if(k<s.size())res+=s[k];
                }
            }
        }
        return res;

    }
};