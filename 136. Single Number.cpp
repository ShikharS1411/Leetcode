class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        //1st approach->using hashing
        unordered_map<int,int>umap;
        for(auto x:nums) umap[x]++;
        for(auto x:umap){
            if(x.second==1) return x.first;
        }
        return -1;
        */
        //2nd approach->using bit-manipulation
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
    }
};