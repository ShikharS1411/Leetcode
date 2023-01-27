#define pb push_back
class Solution {
public:
    int minSetSize(vector<int>& a) {
        unordered_map<int,int>umap;
        for(auto x:a)umap[x]++;
        vector<int>freq;
        for(auto x:umap)freq.pb(x.second);
        sort(freq.rbegin(),freq.rend());
        int n=a.size(),ans=0;
        for(int i=0;i<freq.size();i++){
            n-=freq[i];
            ans++;
            if(n<=a.size()/2){
                break;
            }
        }
        return ans;
    }
};