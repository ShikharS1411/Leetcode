#define pb push_back
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        vector<int>p,n,ans;
        for(auto x:a){
            if(x>0)p.pb(x);
            else n.pb(x);
        }
        bool turn=true;
        for(int i=0;i<max(p.size(),n.size());i++){
            if(i<p.size())ans.pb(p[i]);
            if(i<n.size())ans.pb(n[i]);
        }
        return ans;
    }
};