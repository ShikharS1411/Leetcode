/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root,TreeNode* node,vector<TreeNode*>& path,vector<TreeNode*>& temp){
        if(root==nullptr) return ;
        temp.push_back(root);
        if(root==node) {
            path=temp;
            return;
        } 
        dfs(root->left,node,path,temp);
        dfs(root->right,node,path,temp);
        temp.pop_back();
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>p1,q1,temp;
        dfs(root,p,p1,temp);
        temp={};
        dfs(root,q,q1,temp);
        TreeNode* ans=nullptr;
        for(int i=0;i<min(p1.size(),q1.size());i++){
            if(p1[i]->val==q1[i]->val)ans=p1[i];
        }
        return ans;
    }
};