class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //to store ans
        vector<int>ans;
        //hashing
        unordered_map<int,int>umap;
        int n=nums.size();
        for(auto x:nums)umap[x]++;
        //return the most freq element
        for(auto x:umap){
            if(x.second>n/3)ans.push_back(x.first);
        }
        return ans;  
    }
};