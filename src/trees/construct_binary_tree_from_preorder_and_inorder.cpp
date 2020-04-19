class Solution {
public:
    unordered_map<int,int> pos;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++)pos[inorder[i]]=i;
        return dfs(preorder,inorder, 0,n-1,0,n-1);
    }
    TreeNode*  dfs(vector<int> &preorder,vector<int> &inorder,int pl,int pr,int il,int ir){
        if(pl>pr)return NULL;
        int val=preorder[pl];//根节点
        int k=pos[val];//找到中序遍历中根的位置
        int len=k-il; //左子树的长度
        auto root=new TreeNode(val);
        root->left=dfs(preorder, inorder, pl+1, pl+len, il, k-1);
        root->right=dfs(preorder, inorder, pl+len+1, pr, k+1, ir);
        return root;


    }
};