#define fi first
#define se second
class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        /*
        yeh approach kaam kyu nai kr rhi -_-
        unordered_map<int,int>umap;
        int n=d.size(),sum=0;
        for(int i=0;i<n;i++)umap[d[i]]=p[i];
        for(auto x:umap)cout<<x.first<<" "<<x.second<<endl;
        cout<<endl;
        sort(w.begin(),w.end());
        for(auto x:w){
            // if(umap.find(x)!=umap.end())sum+=umap[x];
            // else {
                // cout<<x<<" ";
                int maxi=0;
                int temp=x;
                while(temp--){
                    if(umap.find(temp)!=umap.end()){
                        //prob tle de dega yr
                        maxi=max(maxi,umap[temp]);
                        // sum+=umap[temp];
                        cout<<temp<<" "<<umap[temp]<<" ";
                        // break;
                    }
                }
                sum+=maxi;
            // }
        }
        return sum;
        */
        //max profit chye with exact or lower difficulty,priority q mei profit max sort
        
        priority_queue<pair<int,int>>pq;
        int n=p.size(),sum=0;
        for(int i=0;i<n;i++)pq.push({p[i],d[i]});
        sort(w.rbegin(),w.rend());//as max heap is created
        for(auto x:w){
            while(!pq.empty()){
                if(pq.top().se>x && !pq.empty())pq.pop();//this popping never affects original pq tbr!!
                else{
                    sum+=pq.top().fi;
                    break;
                }
            }
        }
        return sum;
    }
};