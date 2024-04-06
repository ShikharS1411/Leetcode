class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp="",ans="";
        int n=s.size(),c1=0,c2=0;
        for(int i=0;i<n;i++){
            //best accpted case 1st
            if(s[i]>='a' && s[i]<='z')temp+=s[i];
            else if(s[i]=='('){c1++,temp+=s[i];}
            else if(c1>0){c1--;temp+=s[i];}
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(temp[i]>='a' && temp[i]<='z')ans+=temp[i];
            else if(temp[i]==')'){c2++;ans+=temp[i];}
            else if(c2>0){c2--;ans+=temp[i];}
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};