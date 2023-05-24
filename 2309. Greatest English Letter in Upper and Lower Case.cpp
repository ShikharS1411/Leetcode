class Solution {
public:
    string greatestLetter(string s) {
        string t="";
        for(auto x:s){
            if(isupper(x)){
                if(s.find(tolower(x))!=-1)t+=x;
            }
        }
        sort(t.rbegin(),t.rend()); 
        return t.substr(0,1);
    }
};