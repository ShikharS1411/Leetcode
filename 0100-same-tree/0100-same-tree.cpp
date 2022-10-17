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
    
    void getpreorder1(TreeNode* p,vector<int>&ans1){
        //base case
        if(!p){
            ans1.push_back(0);
            return;
        } 
        ans1.push_back(p->val);
        getpreorder1(p->left,ans1);
        getpreorder1(p->right,ans1);
    }
    void getpreorder2(TreeNode* q,vector<int>&ans2){
        //base case
        if(!q){
            ans2.push_back(0);
            return;
        } 
        ans2.push_back(q->val);
        getpreorder2(q->left,ans2);
        getpreorder2(q->right,ans2);
    }
    */
    void getpreorder(TreeNode* root,vector<int>&v){
        //base case
        if(!root){
            v.push_back(0);
            return;
        } 
        v.push_back(root->val);
        getpreorder(root->left,v);
        getpreorder(root->right,v);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //preorder traversal
        vector<int>ans1,ans2;
        //function calls
        getpreorder(p,ans1);
        getpreorder(q,ans2);
        //dont sort
        if(ans1==ans2) return true;
        return false;
    }
};