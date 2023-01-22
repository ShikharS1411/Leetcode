class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& a, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<a.size();i++)pq.push(make_pair(a[i][k],a[i]));
        while(!pq.empty()){
            auto x=pq.top().second;
            ans.push_back(x);
            pq.pop();
        }
        return ans;
    }
};