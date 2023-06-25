#define ll long long int
#define pb push_back
const ll mod=1e9+7;
class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& a) {
        //DP??
        //greedy approach->aftr every 0 aftr 1(1) we can shyd 
        //as excatly once so 1st and last occ ke bech mei hi part kr skta usme bhi within nxt one's zeros
        int c1=count(a.begin(),a.end(),1);
        if(c1==0)return 0;
        int ind1=-1,ind2=-1;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                ind1=i;
                break;
            }
        }
        for(int i=a.size()-1;i>=0;i--){
            if(a[i]==1){
                ind2=i;
                break;
            }
        }
        vector<int>zeros;
        int count=0;
        //<=ind2 else wont go till end
        for(int i=ind1+1;i<=ind2;i++){
            // bool flag=false;
            if(a[i]==0){
                count++;
                // flag=true;
            }
            else if(count){
                zeros.pb(count);
                count=0;
            }
        }
        // for(auto x:zeros)cout<<x<<" ";
        // cout<<endl;
        // return -1;
        if(zeros.size()==0)return 1;
        ll ans=1;
        for(auto x:zeros){
            //part poss
            // 1->2
            // 2->3
            // 3->4
            int part=x+1;
            // ans*=part%mod;
            ans=(ans*part)%mod;
        }
        return (int)ans;
    }
};
/*
[0,0,1,0,0,1,0,1,0,0,1]
*/