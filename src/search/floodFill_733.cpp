


class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int dx[]={-1,0,1,0},dy[]={0,1,0,-1};
        int oldColor=image[sr][sc];

        if(oldColor==newColor)return image;//当前颜色=新颜色
        image[sr][sc]=newColor;
        for(int i=0;i<4;i++){//四个方向
            int x=sr+dx[i],y=sc+dy[i];
            if(x>=0&&x<image.size()&&y>=0&&y<image[0].size()&&image[x][y]==oldColor)
                floodFill(image,x,y,newColor);
        }
        return image;


    }
};