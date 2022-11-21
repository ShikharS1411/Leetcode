class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        /*
        //brute force->TLE
        int count=0;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=i;j<nums.size();j++){
                prod*=nums[j];
                if(prod<k)count++;
                else break;
            }
        }
        return count;
        */
        //2nd->optimal approach
        /*
        int i=0,j=0,prod=1,count=0,n=nums.size();
        for(auto x:nums){
            if(x<k)count++;//ek baar toh sbhi ayega
        }
        if(count==0)return 0;
        while(j<n){
            //find all the "subarrays" whose prod is less than k
            prod*=nums[j];
            if(j-i+1>1){//as subarray size must be>1 to skip the count of single elements
                if(prod<k)count++;
                while(prod>=k){//dont use else as there can be case even aftr removal of ith element and addition of just jth element the prod can be >=k
                    prod/=nums[i];
                    i++;
                }
            }
            j++;
        } 
        return count;
        */
        //better approach->every element+subarray
        int i=0,j=0,prod=1,count=0,n=nums.size();
        while(j<n){
            prod*=nums[j];
            //dont use else
            while(prod>=k and i<n){
                prod/=nums[i];
                i++;
            }
            if(prod<k)count+=j-i+1;//size of subarray
            j++;
        }
        return count;
    }
};