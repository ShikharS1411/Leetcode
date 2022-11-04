class Solution {
public:
    int longestValidParentheses(string s) {
        //cant apply brute force
        /*
        //wrong approach as need to return the max length
        //edge case
        if(s.size()<2)return 0;
        int maxlen=0;
        stack<char>st;
        for(auto x:s){
            if(st.empty()&&x!=')')st.push(x);
            if(st.empty()&&x==')') continue;
            else if(!st.empty()&&st.top()=='('&&x==')'){
                count+=2;
                st.pop();
                if(!st.empty())st.pop();
            }
            else st.push(x);
        }
        return count;
        */
        /*
        //instead of comparing with char do with int only
        //1st approach->using two stacks
        stack<char>charst;
        stack<int>indst;
        //by default push -1 value in indst as it would be uselful to get length
        indst.push(-1);
        int length=0;
        for(int i=0;i<s.size();i++){
            //when no problem occuring char comes,directly push it and its index
            if(s[i]=='('){
                charst.push(s[i]);
                indst.push(i);//pushing index
            }
            //condition for valid Parentheses,as agr next wla ( aa gya toh iss condition mei jyega hi nhi ,upr wli satisfy ho jyegi
            else if(!charst.empty()&&charst.top()=='('){
                charst.pop();
                indst.pop();
                //update length-> will tell proper sublenght  
                length=max(length,i-indst.top());
            }
            //problem bracket comes(when empty) ')'so just push its index,as cant make a valid parentheses from it
            else indst.push(i);//when charst.empty(),to handle case like ())()
        }
        return length;
        */
        //2nd approach->using only 1 stack i.e indst
        stack<int>indst;
        int length=0;
        indst.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')indst.push(i);
            else {
                indst.pop();
                if(indst.empty())indst.push(i);
                else length=max(length,i-indst.top());
            }
        }
        return length;
    }
};