class Solution {
public:
    int search(vector<int>& nums, int target) {
        //classic binary search approach
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=i+((j-i)/2);
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target)j=mid-1;
            else i=mid+1;
        }
        //additional case
        if(nums[i]==target)return i;
        return -1;//when not found
    }
};