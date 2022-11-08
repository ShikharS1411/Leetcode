class Solution {
public:
    string removeDuplicates(string s) {
        /*
         int i=0;
        while(i<=s.length()){
            if(s[i]==s[i+1]){
            //i->index,2 (1st element the index itself and 2nd its adjacent/next one)
            s.erase(i,2);
                if(i>0) i--;
           }
            else
                i++;
        }
        return s;
        */
        //using stacks
        stack<char>st;//char not int lol
        string ans="";//return type is string
        //as LIFO so traverse from back so we wont be needed any reverse function later
        for(int i=s.size()-1;i>=0;i--){
            //condition check
            //"while" loop dont make any sense as only one element would be inserted at a time so will be removed once if condition satisfies
            if(!st.empty() && st.top()==s[i]){
                st.pop();
//                 continue;skips the loop for that s[i];
            } 
            else st.push(s[i]);
        }
        //traverse the stack and push elements into the array
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
