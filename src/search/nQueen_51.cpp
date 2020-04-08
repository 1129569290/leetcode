class Solution {
public:
    vector<vector<string>>res;
    int N;
    vector<string> out;
    vector<int> pos;
    int r,l;
    vector<vector<string>> solveNQueens(int n) {
        this->N=n;
        pos=vector<int>(N,0);     //第i行皇后的位置
        dfs(0);
        return res;
    }
    
    void dfs(int k){ //摆放第k个皇后

        if(k==N){   //从0开始计数的
            vector<string>out = vector<string>(N,"");//这里有点东西
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++)
                    out[i]+='.';
            }
            for(int i=0;i<N;i++){
                out[i][pos[i]]='Q';
            }
            res.push_back(out);
            return;
        }
        for(int i=0;i<N;i++){//逐个位置尝试，看当前的标号k的皇后是否能摆在这
            int j;
            for(j=0;j<k;j++){//利用前k-1个皇后的位置来判断当前皇后位置的合法性
                if(pos[j]==i||abs(pos[j]-i)==abs(k-j))//行差==列差
                    break;
            }
            if(j==k){//当前第k个皇后的位置合法
                pos[k]=i;
                l=i;
                r=k;
                dfs(k+1);

            }

        }


    }
};