class Solution {
public:
    int maxProfit(vector<int>& nums) {
        //cant always do (max-min) as many test cases would get skipped
        int mini=1e9,maxi=0;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);//min of all will get stored
            maxi=max(maxi,nums[i]-mini);//profit
        }
        return maxi;
    }
};