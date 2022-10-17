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
    int maxDepth(TreeNode* root) {
        /*
        //1st approach->using bfs/level order traversal
        vector<vector<int>> ans;
        // edge case
        if(!root) return 0; 
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) { 
            vector<int> temp; //hr baar while loop mei ek naya temp create hoga 
            int size = q.size();
            for(int i=0; i<size; i++) {
                TreeNode* node = q.front(); 
                q.pop(); // as FIFO so pop will be from front
                //inserting nodes/root in queue  not values
                if(node->left) q.push(node->left); 
                if(node->right) q.push(node->right);
                //inserting values
                temp.push_back(node->val);
            }
            ans.push_back(temp);
        }
        return ans.size();
        */
        //2nd approach->using recursion(more optimal)
        //base case
        if(!root) return 0;
        //call for left
        int left=maxDepth(root->left);
        //call for right
        int right=maxDepth(root->right);
        return 1+max(left,right);
    }
};