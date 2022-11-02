class Solution {
public:
    int numSub(string s) {
        /*
        //brute force approach->TLE
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                for(int j=i;j<s.size();j++){
                    if(s[j]=='1')count++;
                    else break;
                }
            }
        }
        return count;
        */
        //optimal approach
        int ans=0;
        const int mod=1e9+7;
        //just like set bits,//count freq of 1's
        /*
        int n=stoi(s);
        while(n){
            ans++;
            n=n&(n-1);
        }
        return ans;
        */
        //count freq of 1's
        for(auto x:s){
            if(x=='1')ans++;
        }
        //ans=5
        int count=1;
        //now check for substring
        for(int i=1;i<s.size();i++){
                if(s[i]=='1' && s[i]==s[i-1]){
                    ans=(ans+count)%mod;
                    count++;
                }
                else count=1;
        }
        return ans%mod;
        
    }
};