//this is a cf prob solved by a gr8 observation,can be useful for future
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long long double
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define fi first
#define se second
const ll mod = 1e9 + 7;
// (a+b)%mod=((a%mod)+(b%mod))%mod
// (a-b)%mod=((a%mod)-(b%mod)+mod)%mod
// (a*b)%mod=((a%mod)*(b%mod))%mod
// '0'=48,a=97,A=65
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(k);
    for(auto &x:a){
        cin>>x;
        x=n-x;
    }
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
        if(sum>=n){
            cout<<i<<endl;
            return;
        }
    }
    cout<<k<<endl;



    //these many mice can saved by moving them forward by 1(+cat simultaneously)
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
        // cout<<endl;
    }
    return 0;
}