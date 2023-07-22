class Solution {
public:
    bool is_vowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')return true;
        return false;
    }
    string sortVowels(string s) {
// '0'=48,a=97,A=65
        string t="";
        for(auto x:s){
            if(is_vowel(x))t+=x;
        }
        sort(t.begin(),t.end());
        string ans="";
        int i=0,n=t.size();
        for(auto x:s){
            if(is_vowel(x) && i<n){
                ans+=t[i];
                i++;
            }
            else ans+=x;
        }
        return ans;
    }
};