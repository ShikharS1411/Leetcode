#define pb push_back
class Solution {
public:
    vector<int> separateDigits(vector<int>& a) {
    vector<int>ans;
    for(auto x:a){
        string s=to_string(x);
        int n=s.size();
        for(int i=0;i<n;i++){
            ans.pb(s[i]-'0');
        }
    }
    return ans;
    }
};