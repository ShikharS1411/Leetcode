#define ll long long int
const ll mod = 1e9 + 7;
class Solution {
public:
    int maximumProduct(vector<int>& a, int k) {
        //for the greatest prod just make all the min element as large as poss
        priority_queue<int>pq;//maxh
        for(auto x:a)pq.push(-x);//as all +ve 
        while(k--){
            int elem=abs(pq.top());
            pq.pop();
            pq.push(-(elem+1));
        }
        ll prod=1;
        while(!pq.empty()){
            prod*=abs(pq.top());
            prod%=mod;
            pq.pop();
        }
        return (int)prod;
    }
};