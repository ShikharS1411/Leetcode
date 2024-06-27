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
/*
//wrong as leaft node ka dhyaan nhi rkha
//leaf node wo jiske dono child node na ho isme ek wle ko bhi consider kr liya 
        if(!root)return sum==k;
        sum+=root->val;
        bool left=dfs(root->left,k);
        bool right=dfs(root->right,k);
        return left|right;
*/
    bool dfs(TreeNode* root, int k){
        if(!root)return false;
        //check for leaf node
        if(!root->left && !root->right && k-root->val==0)return true;
        bool left=dfs(root->left,k-root->val);
        bool right=dfs(root->right,k-root->val);
        return left|right;
    }
    bool hasPathSum(TreeNode* root, int k) {
        return dfs(root,k);
    }
};