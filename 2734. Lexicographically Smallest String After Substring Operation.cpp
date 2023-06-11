class Solution {
public:
    string smallestString(string s) {
        set<char>st(s.begin(),s.end());
        if(st.size()==1 && s[0]=='a'){
            s.back()='z';
            return s;
        }
        int ind=0;
        while(ind<s.size()){
            if(s[ind]=='a')ind++;
            else break;
            // ind++;
        }
        // cout<<ind<<endl;
        //ind first occ
        for(int i=ind;i<s.size();i++){
            if(i==ind && s[ind]=='a')continue;
            else if(s[i]=='a')break;
            else {
                // if(s[i]=='a')s[i]='z';
                 s[i]=(s[i]-'0'-1)+'0';
            }
        }
        return s;
    }
};