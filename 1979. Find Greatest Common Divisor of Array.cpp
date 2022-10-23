class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //using inbult gcd funtion,but can go through hashing,iterative appraoch
        //refer this problem as well->2427. Number of Common Factors
        return gcd(nums[0],nums[nums.size()-1]);
    }
};