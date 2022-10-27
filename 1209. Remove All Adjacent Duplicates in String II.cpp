class Solution {
public:
            //brute force->apply nested k loops and make substring of size k and check if all equall and the erase them from string
        //optimal->using stacks
        //1st approach would be neglecting the condition till k-1 equall char and when k euqall one came in we'll remove all k char 
        //2nd more optimal->using freq stack pair<char,int>
    string removeDuplicates(string s, int k) {
        //        <key,freq/val/count>
        stack<pair<char,int>>st;
        //traverse from back as LIFO so no need to reverse
        for(int i=s.size()-1;i>=0;i--){
            if(st.empty()||st.top().first!=s[i]) st.push({s[i],1});
            //else->that char is already present so inc its freq
            else st.top().second++;
            //check for if freq==k
            if(st.top().second==k) st.pop();
        }
        //now print/return all the(rest of) the char acc to their respective freq
        string ans="";
        while(!st.empty()){
            //append function will print all the char acc to their occurence/freq
            //         count/freq,     char 
            ans.append(st.top().second,st.top().first);
            st.pop();
        }
        return ans;
    }
};