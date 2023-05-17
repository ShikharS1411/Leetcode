#define pb push_back
#define ppb pop_back
class Solution {
public:
    void dfs(int i,int sum,int n,int k,vector<int>&temp,vector<int>&a,set<vector<int>>&ans){
        if(sum>k)return;
        if(i==n){
            if(sum==k)ans.insert(temp);
            return;
        }
        //take
        temp.pb(a[i]);
        sum+=a[i];
        dfs(i+1,sum,n,k,temp,a,ans);
        temp.ppb();
        sum-=a[i];
        while(i+1<n && a[i]==a[i+1])i++;
        //not take
        dfs(i+1,sum,n,k,temp,a,ans);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        set<vector<int>>ans;
        vector<int>temp;
        int n=a.size();
        dfs(0,0,n,k,temp,a,ans);
        vector<vector<int>>ans2(ans.begin(),ans.end());
        return ans2;
    }
};