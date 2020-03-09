#inclde<iostream>

class longestPalindrome{
//基本思想是以每一个字符为中心点，向两边扫描
    string solution_5(string s) {
            int len=0;
            string res;

            for(int k=0;k<s.size();k++){

                int i=k,j=k+1;
                //回文串是偶数的情况，中间的两个数一定相等，
                while(i>= 0 && j<s.size() &&s[i]==s[j]){i--,j++;}
                if(j-i-1>len){
                    len=j-i-1;
                    res=s.substr(i+1,len);
                }
                i=k-1,j=k+1;
                //妈了个巴子，先要判断越没越界
                //回文数长度为奇数的情况，中间的一个不存在对称的数
                while(i>=0&&j<s.size()&&s[i]==s[j]){i--,j++;}
                if(j-i-1>len){
                    len=j-i-1;
                    res=s.substr(i+1,len);
                }

            }
            return res;

    }
};