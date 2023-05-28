#define ll long long int
class Solution {
public:
    string removeTrailingZeros(string s) {
        // ll n=stoll(s);
        // while(n%10==0)n/=10;
        // return to_string(n);
        // int n=s.size();
        // for(int i=n-1;i>=0;){
            // while(s[i]=='0')i--;
        // }
        int i=s.size()-1;
        while(s[i]=='0')i--;
        return s.substr(0,i+1);
    }
};