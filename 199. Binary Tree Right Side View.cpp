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
    vector<int> rightSideView(TreeNode* root) {
        //jo bhi sbse phele dike wo print krna h jis bhi view point se
        //will only be considering the right nodes
        //using bfs
        //edge case
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        int data=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();
                //keep updating data
                data=node->val;
                //for just right values as that would be at the end
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                //for left view just change the order
            }
            ans.push_back(data);//would be the last updated data
        }
        return ans;
    }
};