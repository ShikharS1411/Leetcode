class Solution {
    /*
    private:
    void getsets(vector<int>&nums, vector<int> temp, int index,vector<vector<int>>& ans) {    
        //as subsets/subsequences are asked 
        //using recurssive approach
        //as subsequences so pick and not pick method
        //base case
        if(index >= nums.size()) {
            ans.push_back(temp);
            return ;
        }
        

        //take/pick
        temp.push_back(nums[index]);
        //function call
        getsets(nums, temp, index+1, ans);
        temp.pop_back();
        //not take/not pick
        //function call
        getsets(nums, temp, index+1, ans);

    }
    //ATQ
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        //define all constraints here
        vector<vector<int> > ans;//acc.to given subset array as have to return                                       //this only
        vector<int> temp;//as this is not the array which is supposed to                                    //print/returned
        int index = 0;
        getsets(nums, temp, index, ans);
        return ans;
        */
    
    public:
        //as subsets/subsequences are asked 
        //using recurssive approach
        //as subsequences so pick and not pick method
    
    void getsets(vector<int>&nums,int i,vector<int>temp,vector<vector<int>>&ans){
        
        //base case
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        
        //include/ take the element
        temp.push_back(nums[i]);
        //function call
        getsets(nums,i+1,temp,ans);
        //exclude/pop/not take the element
        temp.pop_back();
        //function call
        getsets(nums,i+1,temp,ans);
        
        //[[1,2,3],[1,2],[1,3],[1],[2,3],[2],[3],[]]
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> temp;
        //function call
        getsets(nums,0,temp,ans);
        
        return ans;
    }
};