#define ll long long int
class Solution {
public:
    long long pickGifts(vector<int>& a, int k) {
        priority_queue<int>pq;
        for(auto x:a)pq.push(x);
        while(k--){
            int x=pq.top();
            pq.pop();
            x=sqrt(x);
            pq.push(x);
        }
        ll sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};