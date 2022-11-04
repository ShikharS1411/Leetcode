class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            //deal all false cases
            if(s[i]=='a')st.push(s[i]);
            else if(s[i]=='b'){
                //if st.empty() means that 1st cahr is not a ,so b,c wont make sense thus return false;
                if(st.empty()||st.top()!='a')return false;
                st.push(s[i]);
            }
            else if(s[i]=='c'){
                if(st.empty()||st.top()!='b')return false;
                //abc would form in stack now if we push
                st.pop();//only a remains
                if(st.empty())return false;
                st.pop();//abc will get removed
            }
            else false;
        }
        if(st.empty())return true;//that means we have completely popped abc(s) from the given string s ,i.e the given string can be empty so return true
        return false;
    }
};