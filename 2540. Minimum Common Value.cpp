class Solution {
public:
    int getCommon(vector<int>& n1, vector<int>& n2) {
        unordered_map<int,int>umap;
        for(auto x:n1)umap[x]++;
        for(auto x:n2){
            if(umap.find(x)!=umap.end())return x;
        }
        return -1;
    }
};