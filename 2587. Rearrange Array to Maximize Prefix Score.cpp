#define ll long long int
#define pb push_back
class Solution {
public:
    int maxScore(vector<int>& a) {
        //need to maximize score lol
        sort(a.rbegin(),a.rend());
        vector<ll>pref;
        ll sum=0;
        for(auto x:a){
            sum+=x;
            pref.pb(sum);
            cout<<sum<<" ";
        }
        // cout<<endl;        
        // int maxi=*max_element(pref.begin(),pref.end());
        int count=0;
        for(auto x:pref){
            if(x>0)count++;
        }
        return count;
    }
};