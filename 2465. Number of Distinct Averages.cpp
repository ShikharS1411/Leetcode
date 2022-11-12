class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        /*
        vector<double>ans;
        priority_queue<double>maxh;
        priority_queue<double,vector<double>,greater<double>> minh;
        for(auto x:nums){
            maxh.push(x);
            minh.push(x);
        }
        while(minh.empty()==false || maxh.empty()==false){
            double x=maxh.top();
            maxh.pop();
            double y=minh.top();
            minh.pop();
            double z=(x+y)/2;
            ans.push_back(z);
        }
        set<double>st;
        for(auto x:ans)st.insert(x);
        return st.size();
        */
        //using two pointer approach
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        set<double>st;
        while(i<j){
            st.insert((nums[i]+nums[j])/2.0);//need to write 2.0
            i++,j--;
        }
        return st.size();
    }
};