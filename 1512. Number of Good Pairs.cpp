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
        /*
        //optimised approach->hashing
        int count=0;
        unordered_map<int,int>umap;
        for(auto x:nums){
            count+=umap[x];
            umap[x]++;
        }
        return count;
        */
        //mathematical appraoch
        //whenever pairs try to d with map
        map<int,int>m;
        int count=0;
        for(auto x:nums)m[x]++;
        for(auto x:m){
            count+=(x.second*(x.second-1)/2);
        }
        return count;
    }
};