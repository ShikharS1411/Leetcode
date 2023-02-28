class Solution {
public:
    int findDuplicate(vector<int>& a) {
        //iterative method kekw
        unordered_map<int,int>umap;
        for(auto x:a){
            umap[x]++;
            if(umap[x]>1)return x;
        }
        return -1;
    }
};