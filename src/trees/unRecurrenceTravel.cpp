//使用栈实现非递归遍历
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> s;
        while(root||!s.empty()){
            while(root){
                s.push(root);
                root=root->left;
            }
            root=s.top();
            s.pop();
            res.push_back(root->val);
            root=root->right;
        }
        return res;
    }
};