class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        //edge cases
        if(nums.size()<=1)return nums;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
            else continue;
        }
        //now shift all 0's
        //1st test case: 1 4 0 2 0 0->1 4 2 0 0 0
        // this swap wont work
        /*
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0)swap(nums[i],nums[i+1]);
        }
        */
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)ans.push_back(nums[i]);
        }
        while(ans.size()<n)ans.push_back(0);
        return ans;
    }
};