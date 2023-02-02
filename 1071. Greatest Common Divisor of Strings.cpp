class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        //as per constraints can apply brute force 
        if(s1+s2!=s2+s1)return "";
        string temp=s1.substr(0,__gcd(s1.size(),s2.size()));
        return temp;
    }
};