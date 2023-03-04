#define ll long long int
#define pb push_back
class Solution {
public:
    long long coloredCells(int n) {
        vector<int>a;
        if(n==1)return 1;
        a.pb(1);
        int x=0;
        for(int i=1;i<n;i++){
            x+=4;
            a.pb(x);
        }
        // for(auto x:a)cout<<x<<" ";
        // cout<<endl;
        ll sum=0,i=0;
        while(n--)sum+=a[i++];
        return sum;
    }
};