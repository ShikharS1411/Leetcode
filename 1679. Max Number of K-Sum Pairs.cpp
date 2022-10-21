class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        //1st approach->two pointer approach
        //sort 
        sort(nums.begin(),nums.end());
        int count=0,i=0,j=nums.size()-1;
        while(i<j && nums.size()){
                int sum=nums[i]+nums[j];
                if(sum==k){
                    count++;
                    //better push 0 instead
                    nums[i]=0,nums[j]=0;
                    i++,j--;
                }
                else if(sum>k)j--;
                else i++;
            }
        return count;
    }
};