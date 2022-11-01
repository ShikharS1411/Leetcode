class Solution {
public:
    bool isSubsequence(string s, string t) {
        //get all the subsequence and the check if given s exists or not
        
        //two pointer appraoch
        int j=0,n=s.size();
        // string temp="";
        for(int i=0;i<t.size();i++){
            if(t[i]==s[j]){
                // temp+=s[j];
                j++;
            }
        }
        return j==s.size();
    }
};