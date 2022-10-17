class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        for(int i=0;i<s.size();i++){
            string temp="";//empty string and will be created every time when the loop will end
            while(s[i]!=' '&&i<s.size()){
                temp+=s[i];
                i++;
            }
            //upr wle loop se temp string bnyi aur ab hr temp string ko push kr rhe
            if(temp!="")st.push(temp);
        }
        string ans="";//for return type
        while(!st.empty()){
            if(!ans.size())ans=st.top();
            else ans+=" "+st.top();
            st.pop();
        }
        return ans;
    }
};