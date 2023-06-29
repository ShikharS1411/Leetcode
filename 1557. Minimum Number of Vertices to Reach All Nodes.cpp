#define pb push_back
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        map<int,int>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][1]]++;
        }
        vector<int>ans;
        for(int i=0;i<=n-1;i++){
            if(mp.find(i)==mp.end())ans.pb(i);
        }
        return ans;
    }
};