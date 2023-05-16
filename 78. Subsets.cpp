#define pb push_back
#define ppb pop_back
class Solution {
public:
    void rec(int i,int n,vector<int>& a,vector<int>&temp,vector<vector<int>>&ans){
        if(i>=n){
            ans.pb(temp);
            return;
        }
        //take
        temp.pb(a[i]);
        rec(i+1,n,a,temp,ans);
        temp.ppb();
        //not take
        rec(i+1,n,a,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=a.size();
        rec(0,n,a,temp,ans);
        return ans;
    }
};