#define ll long long int
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& a) {
        ll n=a.size(),i=0,j=n-1,sum=0;
        if(n%2==0){
            while(i<j){
                string low=to_string(a[i]),high=to_string(a[j]);
                string res=low+high;
                sum+=stoll(res);
                i++,j--;
            }
            return sum;
        }
        while(i<j){
            string low=to_string(a[i]),high=to_string(a[j]);
            string res=low+high;
            sum+=stoll(res);
            i++,j--;
        }
        ll x=n/2;
        sum+=a[x];
        return sum;
    }
};