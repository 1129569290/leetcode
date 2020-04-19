class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)return res;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            vector<int> level;
            int len=q.size();

            for(int i=0;i<len;i++){
                auto t=q.front();
                q.pop();
                level.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);


            }
            res.push_back(level);



        }
        return res;


    }
};