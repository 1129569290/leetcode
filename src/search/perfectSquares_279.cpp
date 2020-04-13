//使用bfs
//图论的思想，找到最短路
class Solution {
public:
    int numSquares(int n) {
        queue<int> q;
        q.push(0);
        vector<int> dis(n+1,INT_MAX);
        dis[0]=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            if(t==n)return dis[t];
            for(int i=1;t+i*i<=n;i++){
                int j=t+i*i;
                if(dis[j]>dis[t]+1){
                    dis[j]=dis[t]+1;
                    q.push(j);
                }
            }
        }
        return 0;
    }
};

