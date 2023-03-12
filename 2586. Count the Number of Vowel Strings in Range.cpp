class Solution {
public:
bool is_vowel(string &x){
    int n=x.size();
    if((x[0]=='a'||x[0]=='e'||x[0]=='i'||x[0]=='o'||x[0]=='u') && (x[n-1]=='a'||x[n-1]=='e'||x[n-1]=='i'||x[n-1]=='o'||x[n-1]=='u'))return true;
    return false;
}
    int vowelStrings(vector<string>& s, int l, int r) {
        int i=0,count=0;
        for(auto x:s){
            if(i>=l && i<=r){
                if(is_vowel(x))count++;
            }
            i++;
        }
        return count;
    }
};