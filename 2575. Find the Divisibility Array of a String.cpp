#define ll long long int
#define pb push_back
class Solution {
public:
    vector<int> divisibilityArray(string s, int k) {
        /*
        //will give rte -_- go by iterative manner to seperate the digits
        vector<int>temp;
        string t="";
        for(int i=0;i<s.size();i++){
            t+=s[i];
            // cout<<t<<endl;
            if(stoll(t)%k==0)temp.pb(1);
            else temp.pb(0);
        }
        // return {1};
        // for(auto &x:temp){
        //     if(x%k==0)x=1;
        //     else x=0;
        // }
        return temp;
        */
        vector<int>temp;
        ll n=0;
        for(auto x:s){
            n=n*10+(x-'0');
            cout<<n<<" ";
            if(n%k==0)temp.pb(1);
            else temp.pb(0);
            n=n%k;
            cout<<n<<endl;
        }
        return temp;
    }
};