/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root){
        if(!root)return 0;
        // int ans=0;
        // ans=max(ans,1+dfs(root->left));
        // ans=max(ans,1+dfs(root->right));
        int left=1+dfs(root->left);
        int right=1+dfs(root->right);
        if(abs(left-right)>1)return 1e9;
        return max(right,left);
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        //sre sbtree bhi check krne
        if(abs(dfs(root->left)-dfs(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right))return true;
        return false;
    }
};