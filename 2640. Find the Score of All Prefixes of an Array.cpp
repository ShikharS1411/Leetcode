#define ll long long int
#define pb push_back
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& a) {
        vector<ll>ans,temp;
        int maxi=-1e9;
        for(int i=0;i<a.size();i++){
            // ll maxi=*max_element(a.begin(),a.begin()+(i+1));
            if(a[i]>maxi)maxi=a[i];
            temp.pb(maxi);
        }
        ll sum=0;
        for(int i=0;i<a.size();i++){
            //tle dega seperate hi bna le hehe
            // ll maxi=*max_element(a.begin(),a.begin()+(i+1));
            ll cv=a[i]+temp[i];
            sum+=cv;
            ans.pb(sum);
        }
        return ans;
    }
};