class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry=0;
        string res;
        for(int i=0;i<a.size()||i<b.size();i++){
            int va= i<a.size()?a[i]-'0':0;
            int vb= i<b.size()?b[i]-'0':0;
            int s=va+vb+carry;
            carry=s/2;
            s%=2;
            res+=to_string(s);

        }
        if(carry)res+='1';
        reverse(res.begin(),res.end());
        return res;
    }
};