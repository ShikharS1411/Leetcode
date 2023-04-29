#define fi first
#define se second
#define pb push_back
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>c;
        // int count=0;
        unordered_map<int,int>umap1,umap2;
        for(int i=0;i<a.size();i++){
            umap1[a[i]]++;
            umap2[b[i]]++;
            int count=0;
            for(auto x:umap1){
                if(umap2.find(x.fi)!=umap2.end())count+=x.se;
            }
            c.pb(count);
        }
        return c;
    }
};