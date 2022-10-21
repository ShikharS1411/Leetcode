class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /*
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]=i;
            if(umap.find(nums[i])!=umap.end()){
                if(abs(i-umap[nums[i]])<=k)return true;
            }
        }
        return false;
        */
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                if(i-m[nums[i]]<=k)return true;
            }
            //have to do it later otherwise m[nums[i]] would get updated
            m[nums[i]]=i;
            
        }
        return false;
    }
};