#define pb push_back
class Solution {
    static bool comp(string &a,string &b){
        return a+b>b+a;
    }
public:
    string largestNumber(vector<int>& n) {
        vector<string> s;
        for (auto x:n)s.pb(to_string(x));
        sort(s.begin(),s.end(),comp);
        if(s[0] == "0") return s[0];
        string ans ="";
        for (auto x:s)ans+= x;
        return ans;
    }
};