#define pb push_back
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
    vector<int> largestValues(TreeNode* root) {
        //ez bfs
        vector<int>ans;
        queue<TreeNode*>q;
        if(root)q.push(root);
        while(!q.empty()){
            int sz=q.size();
            int maxi=INT_MIN;
            while(sz--){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                maxi=max(maxi,node->val);
            }
            ans.pb(maxi);
        }
        return ans;
    }
};