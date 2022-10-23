class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        //as 10^4 constraint then we can apply brute force approach
        sort(nums.begin(),nums.end());//be sorted acc to first element
        vector<vector<int>>ans;
        vector<int>temp=nums[0];//as "nums[0]" is also a vector so copying it to temp
        //temp[0]=1,temp[1]=3
        //rows ka size
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]<=temp[1]){//temp[1] represents 1st index positioned element
                temp[1]=max(nums[i][1],temp[1]);
            }
            //else condition is neccesary otherwise the compared pair wont be removed
            else {
                ans.push_back(temp);
                //update temp
                temp=nums[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};