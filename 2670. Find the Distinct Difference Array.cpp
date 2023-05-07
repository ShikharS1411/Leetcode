#define pb push_back
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& a) {
        //brute force
        set<int>pref,suff;
        int n=a.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)pref.insert(a[j]);
            if(i==n-1){
                int diff=pref.size();
                ans.pb(diff);
            }
            else{
                for(int j=i+1;j<n;j++)suff.insert(a[j]);
                int diff=pref.size()-suff.size();
                ans.pb(diff);
                pref.clear();
                suff.clear(); 
            }
        }
        return ans;
    }
};