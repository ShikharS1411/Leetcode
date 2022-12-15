class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        //need to get n pairs
        //1 will cotribute to 2 first so 2 pairing would be wasted by this,so need to switch to 3 pairing aftr (1,2) -> (3,4) now 4 pairing would be wasted as it already contributed to 3
        //greedy appraoch
        sort(nums.begin(),nums.end());
        //min elements at front now do pairing,i.e. print alt elements
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)sum+=nums[i];
        }
        return sum;
    }
};