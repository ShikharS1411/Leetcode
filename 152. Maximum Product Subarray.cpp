class Solution {
public:
    int maxProduct(vector<int>& nums) {
    
        //kadane's algo
        int prod=1;
        int maxi1=INT_MIN;
        for(auto it:nums){
            prod=prod*it;//prod*=it
            maxi1=max(maxi1,prod);
            //edge case
            if(prod==0) prod=1;
        }
        //to handle negative cases will use backward approach
        //as if odd no.s -ve count we have to use otherwise for even the first case           will handle itself
        //again initialise to normal
         prod=1;
        int maxi2=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxi2=max(maxi2,prod);
            //edge case
            if(prod==0) prod=1;
        }
        int maxi3=max(maxi1,maxi2);
        return maxi3;
 
    }
};