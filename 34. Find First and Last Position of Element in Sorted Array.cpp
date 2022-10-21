class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //using binary search concepts like upper and lower bound
        //to store ans
        vector<int>ans;
        //firstly check if the target element exists or not
        if(binary_search(nums.begin(),nums.end(),target)){
            //for first occurence we'll use lower_bound as it returns the 1st occurence of the target element(if exists) 
            int ind1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            if(nums[ind1]==target)ans.push_back(ind1);
            //for last occurence we'll use upper_bound as it returns the last occurence's next index (if exists)
            int ind2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
            if(nums[ind2-1]==target)ans.push_back(ind2-1);
            return ans;
        }
        return {-1,-1};
    }
};
//2nd approach
class Solution {
public:
    // function to find first occurrence of element
    int firstPosition(vector<int> nums, int target){
        int ans = -1, s = 0, e = nums.size() - 1, mid;
        
        while( s <= e ){
            mid = s + ( e - s )/2;
            if(nums[mid] == target){
                ans = mid;
                e = mid - 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        
        return ans;
    }
    
    // function to find last occurrence of element
    int lastPosition(vector<int> nums, int target){
        int ans = -1, s = 0, e = nums.size() - 1, mid;
        
        while( s <= e ){
            mid = s + ( e - s )/2;
            if(nums[mid] == target){
                ans = mid;
                s = mid + 1;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        return {firstPosition(nums, target), lastPosition(nums, target)};
    }
};