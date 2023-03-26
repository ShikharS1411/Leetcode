#define ll long long int
class Solution {
public:
    long long subArrayRanges(vector<int>& a) {
        //cant sort,otherwise configuration will get changes
        //brute forces as per constraints
        ll sum=0;
        for(int i=0;i<a.size();i++){
            int mini=a[i],maxi=a[i];
            for(int j=i;j<a.size();j++){
                mini=min(mini,a[j]);
                maxi=max(maxi,a[j]);
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};