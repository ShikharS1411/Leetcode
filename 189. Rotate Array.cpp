class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        //1st approach
        int length=nums.size();
        vector<int>ans(length);
        for(int i=0;i<length;i++){
            // nums[i]=nums[(i+k)%length] or nums[(i+k)%length]=nums[i]; dont do like tis else those prior index wont be in existing anymore
            //so we need to keep track ,need to make another array line 5 of the same size as we need to traverse it at the same time to establish relations so defining its size is must
            ans[(i+k)%length]=nums[i];//ans ki (i+k)th position pe nums[i] wla integer daal dena h :D
        }
        nums=ans;//as it is printing nums in-built -_-
        */
        
        //best approach
        int length=nums.size();
        //firstly reverse the entire aray
        reverse(nums.begin(),nums.end());
        //2nd-> just reverse the k part of this reversed array as it would already in front 
        reverse(nums.begin(),nums.begin()+k%length);//for good measures take k like this  as it wont exceed the size
        //3rd->as first kth part get reversed so now reverse/sort the rest of the part to get proper rotated (k times) array
        reverse(nums.begin()+k%length,nums.end());
    }
};