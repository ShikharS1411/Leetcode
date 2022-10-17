class Solution {
public:
    bool isValid(string s) {
        //using stack
        stack<char>st;
        for(auto x:s){
            if(st.empty()) st.push(x);//need to apply these conditions else it will compare next element to the top
            /*
            //dont do like this as st.top() firstly cant be opposite as x which is starting from left is occuring first so suppost to be (,{,[
            else if((x=='('&&st.top()==')')||(x=='{'&&st.top()=='}')||(x=='['&&st.top()==']')){
                st.pop();
            }
            */
            else if((st.top()=='('&&x==')')||(st.top()=='{'&&x=='}')||(st.top()=='['&&x==']')){
                st.pop();
            }
            else st.push(x);
        }
        if(st.empty()) return true;
        return false;
    }
};