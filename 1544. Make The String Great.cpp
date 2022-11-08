class Solution {
public:
    string makeGood(string s) {
        //similar to remove adjacent dublicates
        //1st approach->iterative->will give tle
        /*
        int i=0;
        //edge case
        if(s.size()==1)return s;
        while(i<=s.size()){
            if(toupper(s[i])==s[i+1]){
                s.erase(i,2);
                if(s.size()==0)return "";
                if(i>0)i--;
            }
            else i++;
        }
         int j=s.size()-1;
        while(j>=0){
            if(tolower(s[j])==s[j-1]){
                s.erase(j-1,2);
                if(j<s.size())j++;
            }
            else j--;
        }
        return s;
        */
        /*
        //wrong approach
        //2nd approach->using stacks
        stack<char>st;
        for(int i=0;i<s.size();i++){
            //if want to follow lifo order just do to upper instead of tolower
            if(!st.empty() and toupper(st.top())==s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        string temp="";
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(),temp.end());
        //again check
        for(int i=temp.size()-1;i>=0;i--){
        //if want to follow lifo order just do to upper instead of tolower
            if(!st.empty() and toupper(st.top())==temp[i]){
                st.pop();
                continue;
            }
            st.push(temp[i]);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
        */
        //optimised approach
        //1st->using stacks
        stack<char>st;
        for(int i=0;i<s.size();i++){
            /*
            //wrong as after eE ee would get removed as lower(e)=e so will eliminate them as well bruh
            if(!st.empty() and ((tolower(st.top()))==s[i] or toupper(st.top())==s[i]))st.pop();
            else st.push(s[i]);
            */
            //cases-> when st.top() is upper and element(upcoming)is lower(but of same alphabet) and vice versa
            if(!st.empty() and ((st.top()-'a'==s[i]-'A') or (st.top()-'A'==s[i]-'a')))st.pop();
            else st.push(s[i]);
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