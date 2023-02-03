#define pb push_back
class Solution {
public:
    string reverseWords(string s) {
        string t="";   
        vector<string>ans;
        for(int i=0;i<s.size();i++){
            string temp="";
            while(s[i]!=' ' && i<s.size()){
                temp+=s[i];
                i++;
            }
            if(temp!="")ans.pb(temp);
        }
        reverse(ans.begin(),ans.end());
        for(auto x:ans)t+=x+' ';
        return t.substr(0,t.size()-1);
    }
};