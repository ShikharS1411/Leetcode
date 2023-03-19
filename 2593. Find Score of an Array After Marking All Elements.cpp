#define ll long long int
#define fi first
#define se second
class Solution {
public:
    long long findScore(vector<int>& a) {
        ll n=a.size(),score=0;
        //min heap
 priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        vector<bool>check(n,false);
        for(ll i=0;i<n;i++)pq.push({a[i],i});
        while(!pq.empty()){
            //x->value       y->index
            ll x=pq.top().fi,y=pq.top().se;
            if(check[y]==false){
                score+=x;
                //mark adjacent ones
                if(y<n-1)check[y+1]=true;
                if(y>0)check[y-1]=true;
            }
            pq.pop();
        }
        return score;
    }
};