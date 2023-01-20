class Solution {
public:
    char slowestKey(vector<int>& a, string s) {
        priority_queue<pair<int,char>>pq;
        int n=s.size();
        pq.push(make_pair(a[0],s[0]));
        for(int i=1;i<n;i++){
            int diff=a[i]-a[i-1];
            pq.push(make_pair(diff,s[i]));
        }
        auto ans=pq.top().second;
        return ans;
    }
};