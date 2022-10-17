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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        /*
        int count=1;
        //bfs traversal
        vector<vector<int>>ans;
        //edge case
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            count++;
            vector<int>temp;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();   
                q.pop();
                if(count%2){//dont do !count%2 as yha pure count ke base pe nhi queue mei kaise push ho rha uske basis pe decide hoga(uske next node kaise push hoge wo dekhna h )
                    if(node->right)q.push(node->right);
                    if(node->left)q.push(node->left);
                }
                else{
                    if(node->left)q.push(node->left);
                    if(node->right)q.push(node->right);
                }
                temp.push_back(node->val);
                count++;
            }
            ans.push_back(temp);
        }
        return ans;
        */
        int count=1;
        //bfs traversal
        vector<vector<int>>ans;
        //edge case
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            count++;
            vector<int>temp;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();   
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                temp.push_back(node->val);
            }
            //as count started from 1
            if(count%2) reverse(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};