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

        //2nd approach->iterative(find and substr function)
        while(s.size()>2){
            //firstly check if the given sub string exists or not
            int pos=s.find("abc");//will give 1st index i.e. of a's
            //when abc is not there it will return -1
            if(pos==-1)return false;
            //0th index to pos ind(excluded) tk print krega
            string s1=s.substr(0,pos);//get a substring till that pos index
            //pos+3 (included)index se size(excluded) tk print krega i.e till size()-1
            string s2=s.substr(pos+3,s.size());//get a substring from pos+3 till lenght
            //get new string i.e of removal of abc
            s=s1+s2;//can direclty add :D
        }
        if(s.size()==0)return true;//that means all removal of abc happend
        return false;
    }
};