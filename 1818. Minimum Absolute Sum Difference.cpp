#define ll long long int
#define pb push_back
const ll mod=1e9+7;
class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& a, vector<int>& b) {
        //obv+BS
        int n=a.size();
        vector<int>diff1;
        ll sum=0;
        for(int i=0;i<n;i++){
            int x=abs(a[i]-b[i]);
            diff1.pb(x);//<-need to minimize it
            //default sum
            sum+=x;
        }
        cout<<sum<<endl;
        vector<int>diff2;//to store optimal ones
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            int lb=lower_bound(a.begin(),a.end(),b[i])-a.begin();
            //deal with edge cases
            if(lb==0)diff2.pb(abs(b[i]-a[lb]));
            else if(lb==n)diff2.pb(abs(b[i]-a[lb-1]));
            //dont do this as not sure if it is present or not ,if present then we can but if not the have to check lb(its next greater elem's ind) and with lb-1(its just less one's)
            // else if(b[i]==a[lb])diff2.pb(abs(b[i]-a[lb]));//when present
            else {
                int x=min(abs(b[i]-a[lb]),abs(b[i]-a[lb-1]));
                diff2.pb(x);//when dont present
            }
        }
        //now we have diff2 the optimal ones
        //check which have max difference as of original one
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,abs(diff1[i]-diff2[i]));
        }
        int ans=(sum-maxi)%mod;
        return ans;
    }
};