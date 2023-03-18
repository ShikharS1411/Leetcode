class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //using two pointer appraoch o(n2)
        sort(nums.begin(),nums.end());
        int mini=INT_MAX,ans=0;//ans->closet sum
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                //check all conditions if sum==target
                if(sum==target) return sum;//as need to return the sum not sets
                //noneed to avoid dublicates as exactly one is asked
                else if(sum<target) j++;
                else k--;
                //conditions if sum ! becoming = to target
                //return the closet in this case
                if(abs(sum-target)<mini){
                    //update mini
                    mini=abs(sum-target);
                    ans=sum;//that sum which is nearest
                }
            }
        }
        return ans;
    }
};