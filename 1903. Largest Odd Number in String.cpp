class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.size();
        int se=-1;
        for(int i=n-1;i>=0;i--){
            if((s[i]-'0')&1){
                se=i;
                break;
            }
        }
        if(se>=0)return s.substr(0,se+1);
        return ""; 
    }
};