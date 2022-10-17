class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        //s[0]=flower similarly all
        //s[0].size()->size of s[0] string
        //"consider" as 2D of only 1 row and 3 column
        //s[0][0]->1st substring ka 1st char hoga
        
        //to store result
        string ans="";//empty by default
        sort(s.begin(),s.end());//sort acc to char hoga jiska bhi uncommon(here 3rd 1st case) woo phele ayega, andr ka kuch sort nhi hoga
        int n=s.size();
        for(int i=0;i<s[0].size();i++){
            if(s[0][i]==s[n-1][i])ans+=s[0][i];
            else break;
        }
        return ans;
    }
};