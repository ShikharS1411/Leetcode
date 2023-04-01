class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& v) {
        map<char,int>mp;
        for(char c='a';c<='z';c++)mp[c]= c-'a'+1;;
        for(int i=0;i<chars.size();i++)mp[chars[i]]=v[i];
        int sum=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            sum+=mp[s[i]];
            if(sum<0)sum=0;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};