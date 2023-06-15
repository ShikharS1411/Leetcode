#define pb push_back
#define fi first
#define se second
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
    int maxLevelSum(TreeNode* root) {
        //ez bfs
        queue<TreeNode*>q;//it will store root not values
        if(root!=NULL)q.push(root);
        int i=1;
        vector<pair<int,int>>vp;
        while(!q.empty()){
            int sz=q.size();
            int sum=0;
            while(sz--){
                TreeNode*node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            vp.pb({sum,i});
            i++;
        }
        int ind=0;
        int maxi=-1e9;
        for(int i=0;i<vp.size();i++){
            if(vp[i].fi>maxi){
                maxi=vp[i].fi;
                ind=vp[i].se;
            }
        }
        return ind;
    }
};