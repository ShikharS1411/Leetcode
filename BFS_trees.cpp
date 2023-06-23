//here's basic BFS template for trees use this and do changes as per needs 
        queue<TreeNode*>q;
        if(root)q.push(root);
        while(!q.empty()){
            int sz=q.size();
            // int maxi=INT_MIN;
            while(sz--){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                // maxi=max(maxi,node->val);
            }
            // ans.pb(maxi);
        }