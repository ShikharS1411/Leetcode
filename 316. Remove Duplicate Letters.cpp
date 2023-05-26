#define ppb pop_back
class Solution {
public:
    string removeDuplicateLetters(string s) {
        //using stacks :/
        vector<int>last(26,0);
        vector<int>vis(26,0);
        string t="";
        int n=s.size();
        //note the last occ of every char
        for(int i=0;i<n;i++)last[s[i]-'a']=i;
        for(int i=0;i<n;i++){
            if(vis[s[i]-'a']==1)continue;
            while(t.size() && t.back()>s[i] && last[t.back()-'a']>i){
                vis[t.back()-'a']=0;
                t.ppb();
            }
            t+=s[i];
            vis[s[i]-'a']=1;
        }
        return t;
    }
};