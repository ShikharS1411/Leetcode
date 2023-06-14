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
    void dfs(TreeNode*root,int& mini,int& prev){
        //base case
        if(!root)return;
        //inorder calls
        dfs(root->left,mini,prev);
        mini=min(mini,abs(root->val-prev));
        //update prev with curr root->val
        prev=root->val;
        dfs(root->right,mini,prev);
    }
    int minDiffInBST(TreeNode* root) {
        //inorder dfs traversal ez
        int mini=1e9,prev=-1e9;
        dfs(root,mini,prev);
        return mini;
    }
};

