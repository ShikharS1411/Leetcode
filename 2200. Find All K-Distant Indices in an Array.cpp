#define pb push_back
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& a, int key, int k) {
        vector<int>v,ans;
        for(int i=0;i<a.size();i++){
            if(a[i]==key)v.pb(i);
        }
        for(auto x:v)cout<<x<<" ";
        //brute force way
        for(int i=0;i<a.size();i++){
            for(int j=0;j<v.size();j++){
                if(abs(i-v[j])<=k){
                    ans.pb(i);
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};