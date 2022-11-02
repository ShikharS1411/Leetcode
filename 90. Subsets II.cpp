class Solution {
public:
    void solve(vector<int>&nums,int ind,vector<int>&temp,set<vector<int>>&st){
        //base case
        if(ind==nums.size()){
            st.insert(temp);
            //dont push ans here->ans.push_back(st.top())otherwise dublicates would form if occure,as top element will remains the same 
            return;
        }
        //pick->function call adding a subset
        temp.push_back(nums[ind]);
        //function call
        solve(nums,ind+1,temp,st);//send ++ind not ind++ as directly need to send increament value
        temp.pop_back();
        //not pick->function call without adding any subset
        solve(nums,ind+1,temp,st);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //to avoid dublicates ->(1,4,4),(4,4,1) use sorting
        sort(nums.begin(),nums.end());
        //get all the subsets
        vector<int>temp;
        vector<vector<int>>ans;
        set<vector<int>>st;
        solve(nums,0,temp,st);
        for(auto x:st)ans.push_back(x);
        return ans;
    }
};