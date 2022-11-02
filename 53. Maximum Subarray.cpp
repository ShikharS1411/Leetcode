class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //by using kadane's algo
        int sum=0;
        int maxi=INT_MIN;//-1e9
        for(auto it:nums){
            sum+=it;
            //update maxi
            maxi=max(maxi,sum);
            //check for complete/total -ve sum
            if(sum<0)sum=0;
        }
        return maxi;
    }
};