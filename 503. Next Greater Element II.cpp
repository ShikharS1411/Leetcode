class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        /*
        //raw code 
        stack<int>st;
        vector<int>ans;
        //traversing from back as lifo order
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]) st.pop();
            if(!st.empty()) ans.push_back(st.top());
            else ans.push_back(-1);
            st.push(nums[i]);
        }
        return ans;
        */
        //for circular array
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n);
        for(int i=2*(n-1);i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]) st.pop();
            if(i<n){
                //now same conditions
                // if(!st.empty()) ans.push_back(st.top());
                if(!st.empty()) ans[i]=st.top();
                // else ans.push_back(-1);
                 else ans[i]=-1;
            }
            st.push(nums[i%n]);
        }
        return ans;
    }
};