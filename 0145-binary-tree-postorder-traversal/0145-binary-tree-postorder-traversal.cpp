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
    void postorder(TreeNode*root,vector<int>&ans){
        //base case(jb meko rturn krna h)
        if(!root) return;
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        //left->right->root
        //recursive call based on it left call,print node,right call
        // using recursion
        vector<int>ans;
        // edge case
        if(!root) return {};
        //function call
        postorder(root,ans);
        return ans;
    }
};
