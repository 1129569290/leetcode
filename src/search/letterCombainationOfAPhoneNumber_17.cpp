class Solution {
public:
    string table[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};
        vector<string> res(1,"");
        for(auto c: digits){
           vector<string> now;
           for(auto i: table[c-'2'])
               for(auto j: res)
                   now.push_back(j+i);
           res=now;
        }
        return res;

    }
};