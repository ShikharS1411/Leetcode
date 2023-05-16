#define pb push_back
#define ppb pop_back
class Solution {
public:
 void dfs(vector<vector<int>> &ans,vector<int> &temp,int i,int sum,int k,int n,vector<int> &a) {
        if(sum>k)return;
        if(i==n && sum==k) {
            ans.pb(temp);
            return;
        }
        else if(i==n && sum!=k)return;
     
        temp.pb(a[i]);
        sum+=a[i];
        dfs(ans,temp,i,sum,k,n,a);
        // dfs(i+1,sum,n,k,temp,a,ans);
        temp.ppb();
        sum-=a[i];
        //not take
        dfs(ans,temp,i+1,sum,k,n,a);
        // dfs(i+1,sum,n,k,temp,a,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& a, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=a.size();
        dfs(ans,temp,0,0,k,n,a);
        // dfs(0,0,n,k,temp,a,ans);
        return ans;
    }
};