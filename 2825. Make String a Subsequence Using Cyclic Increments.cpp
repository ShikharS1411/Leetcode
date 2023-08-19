class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        //two pointer ez
        int i=0,sz=t.size();
        for(auto x:s){
            if(i==sz)return true;
            if(x==t[i])i++;
            else if(x==char(t[i]-1))i++;
            else if(x=='z' && t[i]=='a')i++;
        }
        return i==sz;
    }
};