#define pb push_back
class Solution {
public:
    void dfs(int i,int n,vector<int>&a,vector<vector<int>>&ans){
        if(i==n){
            ans.pb(a);
            return;
        }
        for(int j=i;j<n;j++){
            swap(a[i], a[j]);
            dfs(i+1,n,a,ans);
            swap(a[i], a[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& a) {
        vector<vector<int>>ans;
        int n=a.size(); 
        dfs(0,n,a,ans);
        return ans;
    }
};