class Solution {
public:
    int minMaxDifference(int n) {
        string s=to_string(n);
        char ch;
        for(int i=0;i<s.size();i++){
            if(s[i]<'9'){
                ch=s[i];
                s[i]='9';
                break;
            }
        }
        for(auto &x:s){
            if(x==ch)x='9';
        }
        // cout<<s<<endl;
        // return -1;
        string t=to_string(n);
        char chh;
        for(int i=0;i<t.size();i++){
            if(t[i]>'0'){
                chh=t[i];
                t[i]='0';
                break;
            }
        }
        for(auto &x:t){
            if(x==chh)x='0';
        }
        // cout<<t<<endl;
        return stoi(s)-stoi(t);
    }
};