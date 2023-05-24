#define pb push_back
class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
        int maxi=0,count=1;
        a.pb(a.back()-1);//add a garbage value :/
        for(int i=0;i<a.size()-1;i++){
            if(a[i]<a[i+1])count++;
            else{
                maxi=max(maxi,count);
                count=1;
            }
        }
        return maxi;
    }
};