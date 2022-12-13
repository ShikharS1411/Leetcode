class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /*
        //edge case
        if(s.size()!=t.size())return false;
        map<char,char> mp;
        for(int i=0;i<s.size();i++)mp[s[i]]=t[i];
        // for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
        string res=s;
        for(auto &x:res)x=mp[x];
        return res==t;
        */
        unordered_map<char,char>mp;
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
           if(mp.find(s[i])!=mp.end()&&mp[s[i]]!=t[i]) return false;
            mp[s[i]]=t[i];
        }
        set<char>st;
        for(auto i:mp){
        st.insert(i.second);}
        if(mp.size()!=st.size()) return false;
        return true;
    }
};