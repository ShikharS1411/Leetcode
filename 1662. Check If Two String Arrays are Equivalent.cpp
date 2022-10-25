class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        for(auto x:word1)s1+=x;
        for(auto x:word2)s2+=x;
        if(s1==s2)return true;//dont compare size
        return false;
        //can do like this
        //return s1==s2; will return true if cond satisfy and if not will return false
    }
};
