class Solution {
public:
    bool checkStrings(string s, string t) {
        //kya lc chuddu cf ke q dete ho lmao
        int n=s.size();
        string a="",b="",c="",d="";
        for(int i=0;i<n;i++){
            if(i&1)b+=s[i];
            else a+=s[i];
        }
        for(int i=0;i<n;i++){
            if(i&1)d+=t[i];
            else c+=t[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        return (a==c && b==d);
    }   
};