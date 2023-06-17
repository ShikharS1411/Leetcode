class Solution {
public:
    int maxi=0;
    int dfs(vector<int>& a, vector<int>& b,int i,int j,vector<vector<int>>&dp){
        if(i<0||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        if(a[i]==b[j]){
            //when match
            ans=1+dfs(a,b,i-1,j-1,dp);
            maxi=max(maxi,ans);
            //no need to return it as of now
        }
        else dp[i][j]=0;
        //when not match traverse further array
        dfs(a,b,i-1,j,dp);
        dfs(a,b,i,j-1,dp);
        return dp[i][j]=ans; 
    }
    int findLength(vector<int>& a, vector<int>& b) {
        int n=a.size(),m=b.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        dfs(a,b,n-1,m-1,dp);
        return maxi;
    }
};



//tle approach
#define pb push_back
class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        //can do brute force tho
        map<vector<int>,int>mp;
        for(int i=0;i<a.size();i++){
            for(int j=i;j<a.size();j++){
                // temp.pb(a[j]);
                vector<int>temp;
                for(int k=i;k<=j;k++){
                    // cout<<a[k]<<" ";
                    temp.pb(a[k]);
                }
                // cout<<endl;
                mp[temp]++;
            }
        }
        int maxi=0;
        // cout<<endl;
        for(int i=0;i<b.size();i++){
            for(int j=i;j<b.size();j++){
                // temp.pb(b[j]);
                 vector<int>temp;
                 for(int k=i;k<=j;k++){
                     // cout<<b[k]<<" ";
                     temp.pb(b[k]);
                 }
                // cout<<endl;
                 int sz=temp.size();
                 if(mp.find(temp)!=mp.end())maxi=max(maxi,sz);
            }
        }
        return maxi;
    }
};