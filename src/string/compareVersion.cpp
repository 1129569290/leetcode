class compareVersion {
public:
    vector<int> solution_165(string s){
        vector<int> res;
        for(int i=0;i<s.size();i++){
            int j=i;
            int n=0;
            while(s[j]!='.'&&j<s.size()){
                n=n*10+(s[j]-'0');
                j++;
            }
            res.push_back(n);
            i=j;
        }
        while(res.size()&&res.back()==0)res.pop_back();
        return res;
    }
    int compareVersion(string version1, string version2) {
        auto v1=getNumber(version1);
        auto v2=getNumber(version2);
        if(v1>v2)return 1;
        if(v1<v2)return -1;
        else return 0;

    }
};