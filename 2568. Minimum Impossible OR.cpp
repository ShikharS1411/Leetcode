#define ll long long int
class Solution {
public:
    int minImpossibleOR(vector<int>& a) {
        //simple obv buddy -_-
        unordered_map<ll,ll>umap;
        for(auto x:a)umap[x]++;
        ll i=1;
        while(true){
            if(umap.find(i)==umap.end())return i;
            i=i*2;
        }
    }
};