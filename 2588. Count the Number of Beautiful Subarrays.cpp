#define ll long long int
#define fi first
#define se second
class Solution {
public:
    long long beautifulSubarrays(vector<int>& a) {
        //just get the count of the subarrays whose XOR value ios zero
        //get the count of each xorred element if count>1 or Xor==0->count++
        unordered_map<ll,ll>umap;
        ll xorr=0,count=0;
        umap[0]++;
        for(auto x:a){
            xorr^=x;
            count+=umap[xorr];//freq of it
            umap[xorr]++;
        }
        return count;
    }
};