class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {       
        /*
        //using hashing
        //using sets
        set<vector<int>>s;//as set will avoid dublicates vectorsets
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int low=i+1,high=nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    //to avoid dublicates
                    s.insert({nums[i],nums[low],nums[high]});
                    low++,high--;
                }
                else if(sum>0) high--;
                // if(sum>0) high--;
                else low++;
            }
        }
        vector<vector<int>>ans;
        for(auto x:s) ans.push_back(x);
        return ans;
        */
        //using two pointer approach
        //to store result
        vector<vector<int>>ans;
        //as we dont have to return index so can directly use sorting
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            //condition check
            if(i>0 && nums[i]==nums[i-1])continue;//skips the entire loop for that i
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    //to avoid dublicates
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    j++,k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return ans;
    }
};