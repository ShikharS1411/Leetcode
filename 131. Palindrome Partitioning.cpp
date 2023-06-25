#define pb push_back
#define ppb pop_back
class Solution {
public:
    bool check(string t){
        string x=t;
        reverse(x.begin(),x.end());
        return x==t;
    }
    void dfs(int ind,int n,string &s,vector<vector<string>>&ans,vector<string>&temp){
        if(ind==n){
            ans.pb(temp);
            return;
        }
        for(int i=ind;i<n;i++){
            string t=s.substr(ind,i-ind+1);
            if(check(t)){
                //part
                temp.pb(t);
                dfs(i+1,n,s,ans,temp);
                //not part
                temp.ppb();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string>temp;//to carry
        vector<vector<string>>ans;
        dfs(0,n,s,ans,temp);
        return ans;
    }
};