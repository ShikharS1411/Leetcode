class Solution {
public:
    int minMoves(vector<int>& nums) {
        //dont need to update anything 
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=nums[i]-nums[0];
        }
        return count;
    }
};