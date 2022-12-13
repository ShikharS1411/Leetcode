class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //edge case
        if(s.size()!=t.size())return false;
        map<char,char> mp;
        for(int i=0;i<s.size();i++)mp[s[i]]=t[i];
        // for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
        string res=s;
        for(auto &x:res)x=mp[x];
        return res==t;
    }
};