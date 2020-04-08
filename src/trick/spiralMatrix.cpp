class Solution {
public:
    vector<int> res;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())return {};
        vector<vector<bool>> visited=vector<vector<bool>>(matrix.size(),vector<bool>(matrix[0].size(),false));
        int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
        int x=0,y=0,d=0;
        for(int i=0;i<matrix.size()*matrix[0].size();i++){
            int nx=x+dx[d],ny=y+dy[d];
            if(nx<0||ny<0||nx>=matrix.size()||ny>=matrix[0].size()||visited[nx][ny]==true){
                d=(d+1)%4;
                nx=x+dx[d],ny=y+dy[d];
            }
            res.push_back(matrix[x][y]);
            visited[x][y]=true;
            x=nx,y=ny;
        }
        return res;

    }
};