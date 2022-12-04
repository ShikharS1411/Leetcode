class Solution {
public:
    bool divideArray(vector<int>& nums) {
        //nums will always be of even size
        unordered_map<int,int>umap;
        for(auto x:nums)umap[x]++;
        for(auto x:umap){
            if(x.second%2)return false;
        }
        return true;
    }
};