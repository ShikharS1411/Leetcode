
//tle/brute force approach
class Solution {
public:
    
    bool ispalindrome(string x){
        string temp=x;
        reverse(x.begin(),x.end());
        return temp==x;
    }
    
    string longestPalindrome(string s) {
        
        // TLE
        vector<pair<int,string>>v;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(ispalindrome(s.substr(i,j-i+1))){
                    v.push_back({j-i+1,s.substr(i,j-i+1)});
                }
                // else break;
            }
        }
        sort(v.begin(),v.end());
        int n=v.size();
        string a=v[n-1].second;
        return a;
        
    }
};
