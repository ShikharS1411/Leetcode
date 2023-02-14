#define pb push_back
#define fi first
#define se second
class Solution {
public:
    vector<int> findLonely(vector<int>& a) {
        unordered_map<int,int>umap;
        //can use .count(a.begin(),a.end(),x)
        vector<int>temp;
        for(auto x:a)umap[x]++;
        for(auto x:umap){
            /*
            if(x.se>1)umap.erase(x.fi);
            if(umap.find(x.fi+1)!=umap.end()){
                umap.erase(x.fi);
                umap.erase(x.fi+1);
            }
            if(umap.find(x.fi-1)!=umap.end()){
                umap.erase(x.fi);
                umap.erase(x.fi-1);
            }
            temp.pb(x.fi);
            */
            if(x.se==1 && umap.find(x.fi+1)==umap.end() && umap.find(x.fi-1)==umap.end())temp.pb(x.fi);
        }
        return temp;
    }
};