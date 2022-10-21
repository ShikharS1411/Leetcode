class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*
        //return the index(if==to target) from which the sorted array been rotated
        //first check that if the target element exists in the array or not
        if(binary_search(nums.begin(),nums.end(),target)){
            int s=0,e=nums.size()-1,mid;
            while(s<=e){
                mid=s+(e-s)/2;
                if(target==nums[mid]&&nums[mid-1]<target&&nums[mid+1]>target) return mid;
                else if(target>nums[mid])s=mid+1;
                else e=mid-1;
            }
        }
        return -1;
        */
        //first check which half is sorted,and then find the target element acc to range else eliminate the entire part
        int s=0,e=nums.size()-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(target==nums[mid])return mid;
            if(nums[s]<=nums[mid]){//that means left part is sorted now try to find target in it
                //condition check
                if(nums[s]<=target&&target<=nums[mid]){//that means target lies in this sorted left sided range
                    e=mid-1;
                }
                else s=mid+1;//target not lies in left side
            }
            else{
                //condition check
                if(nums[mid]<=target&&target<=nums[e]){//that means target lies in this sorted right sided range
                    s=mid+1;
                }
                else e=mid-1;//target not lies in right side   
            }
        }
        return -1;
    }
};