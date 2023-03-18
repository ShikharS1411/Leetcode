class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
        //using backtracking approach
        int index=-1;
        for(int i=nums.size()-1; i>=0;i--){
            if(nums[i]>nums[i-1]) {
                index=i;
                break;
            }
        }
        if(index==-1) reverse(nums.begin(),nums.end());
        else{
            int prev=index;
        //to find just greater element 
        for(int i=index+1;i<nums.size();i++){
            if(nums[i]>nums[index-1] && nums[prev]>=nums[i]){
                prev=i;
                }
            } 
            swap(nums[index-1],nums[prev]);
            //reverse/sort the rest of the array
            sort(nums.begin()+index,nums.end());
        }*/
        // not good appraoch,can go from tow pointer approach
          int n = nums.size(), l, k;
        for(k=n-2; k>=0; k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(l=n-1; l>k; l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k], nums[l]);
            reverse(nums.begin()+k+1, nums.end());
        }
    }
};