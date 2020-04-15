class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return dfs(root->left,root->right);
    }
    bool dfs(TreeNode* l,TreeNode *r){
        if(!l||!r)return !l&&!r;//左子树和右子树都为空时候才对称
        //左子树的右子树和右子树的左子树相等
        //左子树的左子树和右子树的右子树相等
        return l->val==r->val&&dfs(l->left,r->right)&&dfs(l->right,r->left);
    }
};