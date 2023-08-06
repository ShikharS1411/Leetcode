//template for BS
bool check(ll mid,ll k,vector<ll>&a){
    //perform operation and check equality,<,>for k only 
}
void solve(){
    //max of max/min of min/min of max/max of min->apply BS
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    ll l=1,r=1e8,ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(check(mid,k,a)){
            ans=mid;
            //as need to max
            //change acc to need
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
}