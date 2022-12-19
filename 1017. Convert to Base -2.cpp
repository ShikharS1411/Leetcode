class Solution {
public:
    string baseNeg2(int n) {
        /*
        //edge case
        if(n==0)return "0";
        //base -2->subsquence division just like we did in binary(only 0/1)
        string s="";
        while(n){
            s+=to_string(abs(n)%2);
            n=n/(-2);
            n=abs(n);
        }
        reverse(s.begin(),s.end());
        return s;
        */
        string ans="";
        if(n==0)
            ans+=('0');
        int r;
        while(n){
            r=n%(-2);
            if(r<0){
                r+=2;
                n=n/(-2)+1;
            }else
                n/=(-2);
            ans+=(r+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};