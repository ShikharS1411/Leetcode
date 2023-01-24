#define ll long long int
#define pb push_back
class Solution {
public:
    long long maxScore(vector<int>& n1, vector<int>& n2, int k) {
        /*
        wrong approach we cant always judge by prioritising n2's maximised min value
        vector<pair<int,int>>a;
        for(int i=0;i<n2.size();i++)a.pb(make_pair(n2[i],n1[i]));
        sort(a.rbegin(),a.rend());
        //take the maximised min
        //as zero based indexing
        int mini=a[k-1].first;
        //take top k max element,as per indexin order
        ll sum=0,ans=0;
        for(int i=k-1;i>=0;i--)sum+=a[i].second;
        ans=sum*mini;
        return ans;
        */
        //another worng approach
        /*
        vector<pair<int,int>>a,b;
        for(int i=0;i<n2.size();i++)a.pb(make_pair(n2[i],n1[i]));
        sort(a.rbegin(),a.rend());
        //take the maximised min
        //as zero based indexing
        int mini1=a[k-1].first;
        //take top k max element,as per indexin order
        ll sum1=0;
        for(int i=k-1;i>=0;i--)sum1+=a[i].second;
        ll ans1=sum1*mini1;
        
        for(int i=0;i<n1.size();i++)b.pb(make_pair(n1[i],n2[i]));
        sort(b.rbegin(),b.rend());
        int mini2=b[k-1].second;
        ll sum2=0;
        for(int i=k-1;i>=0;i--)sum2+=b[i].first;
        ll ans2=sum2*mini2;
        return max(ans1,ans2);
        */
        int n = n1.size();
        vector<pair<int,int>> v(n);
        for (int i=0;i<n;++i) {
            v[i] = {n2[i], n1[i]};
        }
        sort(v.begin(), v.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        long long s = 0, ans = 0;
        for (int i=n-1;i>=0;--i) {
            pq.push(v[i].second);
            s += v[i].second;
            if (pq.size() > k) {
                s -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                ans = max(ans, s*(v[i].first));
            }
        }
        return ans;

    }
};