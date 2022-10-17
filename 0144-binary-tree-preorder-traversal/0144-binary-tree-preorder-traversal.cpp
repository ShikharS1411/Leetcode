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
    //1st approach->using recursion
    void preorder(TreeNode*root,vector<int>&ans){
        //base case
        if(!root) return;
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        //root->left->right
        //recursive call based on it print node,left call,right call
        vector<int> ans;
        //edge case
        if(!root) return {};
        //function call
        preorder(root,ans);
        return ans;
    }
};