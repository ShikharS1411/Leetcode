class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        /*
        //we can apply brute force as well as constraints has less range
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
            for(int j=i+1;j<nums.size();j++)
                if(nums[i]==nums[j]&&i<j)count++;
        return count;
        */
        //after this do prob->2364
        //optimised approach->hashing
        int count=0;
        unordered_map<int,int>umap;
        for(auto x:nums){
            count+=umap[x];
            umap[x]++;
        }
        return count;
    }
};