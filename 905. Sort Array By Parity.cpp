#define pb push_back
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        /*
        vector<int>e,o,ans;
        for(auto x:a){
            if(x&1)o.pb(x);
            else e.pb(x);
        }
        for(auto x:e)ans.pb(x);
        for(auto x:o)ans.pb(x);
        return ans;
        */
        //more optimal sol
        vector<int>ans;
        for(auto x:a){
            if(x&1)ans.pb(x);
            else ans.insert(ans.begin(),x);
        }
        return ans;
    }
};