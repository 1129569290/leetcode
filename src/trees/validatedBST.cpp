class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return dfs(root,INT_MIN,INT_MAX);

    }
    bool dfs(TreeNode* root,long long minv,long long maxv){
        if(!root) return true;
        if(root->val<minv||root->val>maxv)return false;
        //1ll表示转化为long long 类型，防止溢出，节点的值可能大于INT_MAX
        return dfs(root->left,minv,root->val-1ll)&&dfs(root->right,root->val+1ll,maxv);
    }
};
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        struct TreeNode *q[1000];
        int top=0;
        long long temp =INT_MIN-1ll;
        do{
            while(root){
                q[top++]=root;
                root=root->left;
            }
            if(top){
                root=q[--top];
                if(root->val<=temp)return false;
                temp=root->val;
                root=root->right;
            }
        }while(top||root);
        return true;


    }
};