#define ll long long int
class Solution {
public:
    int splitNum(int n) {
        priority_queue<int>pq;
        string s=to_string(n);
        for(auto x:s)pq.push(x);
        int turn=1;
        string a,b;
        while(!pq.empty()){
            if(turn==1){
                auto x=pq.top();
                a+=x;
                turn=0;
            }
            else{
                auto x=pq.top();
                b+=x;
                turn=1;
            }
            pq.pop();
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        return stoi(a)+stoi(b);
    }
};