#define fi first
#define se second
#define pb push_back
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& a) {
        unordered_map<int,int>umap;
        for(auto x:a)umap[x]++;
        int maxi=0;
        for(auto x:umap){
            if(x.se>maxi)maxi=x.se;
        }
        vector<vector<int>>ans;
        for(int i=0;i<maxi;i++){
            vector<int>temp;
            for(auto &x:umap){
                if(x.se>0){   
                    temp.pb(x.fi);
                    // umap[x.fi]--;
                    x.se--;
                //bc erase kaise kru 
                // if(x.se==0)umap.erase(x.fi);
                }
            }
            ans.pb(temp);
        }
        return ans;
    }
};