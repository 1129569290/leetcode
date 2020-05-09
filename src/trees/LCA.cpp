class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //如果以root为根的子树中包含p和q，则返回最近公共祖先
        //如果只包含p，则返回p
        //如果只包含q,则返回q
        //如果都不包含，则返回NULL
        if( !root || root==p || root==q )return root;
        auto left = lowestCommonAncestor(root->left,p,q);
        auto right= lowestCommonAncestor(root->right,p,q);
        if(!left)return right;
        if(!right) return left;
        return root;
    }

};