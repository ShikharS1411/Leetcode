class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        //hashing
        unordered_map<int,int>umap;
        int maxi=-1e9;
        int key=-1;
        for(auto x:nums)umap[x]++;
        //return the most freq element
        for(auto x:umap){
            if(x.second>maxi){
                maxi=x.second;
                if(x.second>nums.size()/2)key=x.first;
            }
        }
        return key;
        */
        /*
        //optimal approach->Moore voting 
        int count=0;
        int candidate=0;
        for(auto x:nums){
            if(count==0)candidate=x;
            if(x==candidate)count++;
            else count--;
        }
        return candidate;
        */
        //better moore's algo approach
                int count=1,res=0,n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[res] == nums[i])count++;
            else count--;
            if(count==0){
                count=1;
                res=i;
            }   
        }
        //2nd   res 
        count=0;
        for(int i=0;i<n;i++){
            if(nums[res]==nums[i])count++;
        }
        if(count<=(n/2))return -1;
        return nums[res];
    }
};