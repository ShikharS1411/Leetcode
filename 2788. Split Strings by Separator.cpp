#define pb push_back
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& s, char ch) {
        vector<string>ans;
        for(auto x:s){
            // cout<<x<<endl;
            for(int i=0;i<x.size();i++){
                string t="";
                while(x[i]!=ch && i<x.size()){
                    t+=x[i];
                    i++;
                }
                if(t.size())ans.pb(t);
            }
        }
        
        return ans;
    }
};