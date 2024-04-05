
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


//DP approach
class Solution {
public:
    
    // bool ispal(string x){
    //     string temp=x;
    //     reverse(x.begin(),x.end());
    //     return temp==x;
    // }
    int dp[1001][1001];
    bool ispal(int i,int j,string &s){
        //base case
        if(i>=j)return true;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==s[j])return dp[i][j]=ispal(i+1,j-1,s);
        return false;
    }
    string longestPalindrome(string s) {
        memset(dp,-1,sizeof(dp));
        int n=s.size();
        int ind1=-1,ind2=-1,maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispal(i,j,s)){
                    //do this pal checking recursively with DP
                    if(j-i+1>maxi){maxi=j-i+1;ind1=i;ind2=j;}
                }
            }
        }
        return s.substr(ind1,maxi);
    }
};
