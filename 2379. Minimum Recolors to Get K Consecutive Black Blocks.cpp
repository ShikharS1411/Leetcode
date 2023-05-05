class Solution {
public:
    int minimumRecolors(string s, int k) {
        //can apply brute force bruh
        int mini=1e9;
        int n=s.size();
        for(int i=0;i<=n-k;i++){
            int cw=0;
            for(int j=i;j<i+k;j++){
                if(s[j]=='W')cw++;
            }
            mini=min(mini,cw);
        }
        return mini;
    }
};