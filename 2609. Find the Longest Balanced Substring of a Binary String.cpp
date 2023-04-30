class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxi=0;
        int n=s.size();
        for(int i=0;i<n;){
            int cnt0=0,cnt1=0;
            while(s[i]=='0' && i<n){
                cnt0++;
                i++;
            }
            while(s[i]=='1' && i<n){
                cnt1++;
                i++;
            }
            int mini=min(cnt0,cnt1);
            maxi=max(maxi,2*mini);
        }
        return maxi;
    }
};