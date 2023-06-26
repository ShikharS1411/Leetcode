#define pb push_back
#define ppb pop_back
class Solution {
 void dfs(int s,int e,vector<int>&temp,vector<vector<int>>&g,vector<vector<int>>&ans){
     if(s==e){
         ans.pb(temp);
         return;
     }
     for(auto x:g[s]){
         //pick
         temp.pb(x);
         dfs(x,e,temp,g,ans);
         //not pick
         temp.ppb();
     }
 }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g){
        int n=g.size();
        //no need to make adj vect
        vector<vector<int>> ans;
        vector<int>temp;
        temp.pb(0);
        dfs(0,n-1,temp,g,ans);
        return ans;
    }
};