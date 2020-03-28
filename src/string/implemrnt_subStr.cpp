class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())return 0;
        haystack=" "+haystack;
        needle= " "+needle;
        //cout<<haystack<<needle<<endl;
        int *next=new int[needle.size()]{0};

        int j=0;
        for(int i=2;i<needle.size();i++){
            while(j&&needle[j+1]!=needle[i])j=next[j];
            if(needle[j+1]==needle[i])j++;
            next[i]=j;
        }
        j=0;
        for(int i=1;i<haystack.size();i++){
            while(j&&haystack[i]!=needle[j+1])j=next[j];
            if(haystack[i]==needle[j+1])j++;
            if(j==needle.size()-1){
                return i-j;
            }

        }
        return -1;

    }

};