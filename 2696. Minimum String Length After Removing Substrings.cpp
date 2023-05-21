class Solution {
public:
    int minLength(string s) {
        int i=0;
        while(i<s.length()){
            while(i+1<s.length() && ((s[i]=='A' && s[i+1]=='B')||(s[i]=='C' && s[i+1]=='D')) ){
                s.erase(i,2);
                if(i!=0) i--;
                }            
            i++;
        }
        return s.length();
    }
};