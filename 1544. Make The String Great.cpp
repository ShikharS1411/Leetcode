class Solution {
public:
    string makeGood(string s) {
        //similar to remove adjacent dublicates
        //1st->using stacks
        stack<char>st;
        for(int i=0;i<s.size();i++){
            /*
            if(!st.empty() and ((st.top()-'a'==s[i]-'A') or (st.top()-'A'==s[i]-'a')))st.pop();
            else st.push(s[i]);
            */
            if(!st.empty() and ((islower(s[i])&& isupper(st.top()))||(isupper(s[i])&& islower(st.top())))){
                //now check if of same element
                if(tolower(s[i]) == tolower(st.top()))st.pop();
                else st.push(s[i]);
                }
            else st.push(s[i]);
        }
        }
        string temp="";
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};