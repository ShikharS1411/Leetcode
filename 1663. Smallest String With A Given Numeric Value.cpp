class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans="";
        k-=n;
        for(int i=0;i<n;i++){
            if(k>=25){
                ans+='z';
                k-=25;
            }
            else{
                ans+=(char)('a'+k);
                k=0;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};