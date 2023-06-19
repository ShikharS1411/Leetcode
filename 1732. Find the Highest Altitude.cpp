class Solution {
public:
    int largestAltitude(vector<int>& a) {
        int n=a.size();
        vector<int>alt(n+1);
        alt[0]=0;
        int maxi=0;
        for(int i=0;i<a.size();i++){
            alt[i+1]=a[i]+alt[i];
            maxi=max(maxi,alt[i+1]);
        }
        return maxi;
    }
};