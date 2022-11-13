class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        //brute force as constraints are less ranged,similar to subarray whose gcd=k
        long count=0;
        for(int i=0;i<nums.size();i++){
            long x=nums[i];
            for(int j=i;j<nums.size();j++){
                x=lcm(nums[j],x);//x would be updated to lcm
                if(x==k)count++;
                if(x>k)break;
            }
        }
        return count;
    }
};