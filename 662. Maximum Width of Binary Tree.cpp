#define ll long long int
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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*,ll>>q;
        q.push({root,0});
        int maxi=0;
        while(!q.empty()){
            int sz=q.size();
            int mini=q.front().se;
            int first,last;
            for(int i=0;i<sz;i++){
                auto it=q.front();
                auto node=it.fi;
                ll id=it.se-mini;
                q.pop();
                if(i==0)first=id;
                if(i==sz-1)last=id;
                if(node->left)q.push({node->left,(2*1LL*id)+1});
                if(node->right)q.push({node->right,(2*1LL*id)+2});
            }
            maxi=max(maxi,last-first+1);
        }
        return maxi;
    }
};