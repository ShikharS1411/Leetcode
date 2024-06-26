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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root)return {{}};
        map<int,vector<int>>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        mp[0].pb(root->val);
        while(q.size()){
            int n=q.size();
            for(int i=0;i<n;i++){
                auto node=q.front();
                q.pop();
                auto res=node.first;
                int verti=node.second;
                if(res->left){
                    q.push({res->left,verti-1});
                    mp[verti-1].pb(res->left->val);
                }
                if(res->right){
                    q.push({res->right,verti+1});
                    mp[verti+1].pb(res->right->val);
                }
            }
        }
        vector<vector<int>>ans;
        for(auto &[x,y]:mp){ans.pb(y);}
        return ans;
    }
};