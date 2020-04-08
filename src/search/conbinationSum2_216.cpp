
class Solution {
public:
    vector<vector<int>> res;
    vector<int> out;
    int k;
    int n;
    vector<vector<int>> combinationSum3(int k, int n) {
        this->k=k;
        this->n=n;
        dfs(0,n,1);
        return res;

    }
    void dfs(int count,int n,int start){
        if(n==0){
            if(count==k)res.push_back(out);
            return;
        }
        for(int i=start;i<=9;i++){
            out.push_back(i);
            dfs(count+1,n-i,i+1);
            out.pop_back();
        }


    }
};