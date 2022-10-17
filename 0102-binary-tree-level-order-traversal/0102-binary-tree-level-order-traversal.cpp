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
    vector<vector<int>> levelOrder(TreeNode* root) {
        //queue mei root push hoga jo ki TreeNode* type ka h ,aur temp mei data/val coz wo int type ka h 
        vector<vector<int>> ans;
        // edge case
        if(!root) return {}; 
        //make a queue of the same data type as of the root 
        queue<TreeNode*> q;
        q.push(root);//root push krte hi data push hoga as q "TreeNode*" type ka h
        while(!q.empty()) { 
            vector<int> temp; //hr baar while loop mei ek naya temp create hoga 
            int size = q.size();
            for(int i=0; i<size; i++) {
                TreeNode* node = q.front(); 
                q.pop(); // as FIFO so pop will be from front
                //inserting nodes not values
                if(node->left) q.push(node->left); 
                if(node->right) q.push(node->right);
                //inserting values
                temp.push_back(node->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
