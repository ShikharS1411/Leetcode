#define pb push_back
class Solution {
public:
    int maxCount(vector<int>& b, int n, int maxi) {
        //dont sort
        // sort(b.begin(),b.end());
        unordered_map<int,int>umap;
        for(auto x:b)umap[x]++;
        vector<int>temp;
        int j=1;
        while(j<=n)temp.pb(j++);
        int count=0,prefsum=0;
        for(int i=0;i<temp.size();i++){
            if(umap.find(temp[i])==umap.end() && prefsum<=maxi){
                // cout<<temp[i]<<endl;
                prefsum+=temp[i];
                if(prefsum>maxi)break;
                count++;
            }
        }
        // cout<<endl;
        return count;
    }
};