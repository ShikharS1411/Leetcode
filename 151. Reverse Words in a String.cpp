class Solution {
public:
    string reverseWords(string s) {
        /*
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
        */
        /*
        //2nd appraoch->using stringstream
        //stringstream is use to count the number of words in a string
        stringstream ss(s);
        //for iteration we'll use a temp string
        string word="",ans="";
        stack<string>st;
        while(ss>>word)st.push(word);
        while(!st.empty()){
            ans+=st.top()+" ";
            st.pop();
        }
        return ans.substr(0,ans.size()-1);//to avoid the last " "
        */
        //more optimised of 2nd one
        stringstream all(s); 
        string word,ans = "";
        while (all >> word)ans = word + " " + ans;//will be reversed as adding ans aftr adding word to it
        return ans.substr(0,ans.length()-1);//to avoid that " " in the end
    }
};