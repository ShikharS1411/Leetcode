class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        //if constraint lenght is less then apply brute force approach else go with optimal sol
        /*aisa kuch krna hoga
        if(gcd(nums[],nums[])==k) count++;
        return count;
        */
        //with brute force o(n2)
        int count=0;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];//represent gcd
            for(int j=i;j<nums.size();j++){
                //update gcd
                x=gcd(nums[j],x);
                if(x==k) count++;
            }
        }
        return count;
    }
};