#define pb push_back
class Solution {
public:
    bool is_vowel(string &x){
        int n=x.size();
        if((x[0]=='a'||x[0]=='e'||x[0]=='i'||x[0]=='o'||x[0]=='u') && (x[n-1]=='a'||x[n-1]=='e'||x[n-1]=='i'||x[n-1]=='o'||x[n-1]=='u'))return true;
        return false;
    }
    vector<int> vowelStrings(vector<string>& s, vector<vector<int>>& q) {
        //pref sum concept
        vector<int>temp,pref,ans;
        for(auto x:s){
            if(is_vowel(x))temp.pb(1);
            else temp.pb(0);
        }
        int sum=0;
        for(auto x:temp){
            sum+=x;
            pref.pb(sum);
            // cout<<x<<" ";
            // cout<<sum<<" ";
        }
        // return {-1};
        //now just select the range(always consists of two)
        for(int i=0;i<q.size();i++){//traversing the queries
            int left=q[i][0],right=q[i][1];
            if(left==0)ans.pb(pref[right]);
            else{
                int x=pref[right]-pref[left-1];
                ans.pb(x);
            }
        }
        return ans;
    }
};