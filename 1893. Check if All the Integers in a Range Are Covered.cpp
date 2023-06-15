class Solution {
public:
    bool isCovered(vector<vector<int>>& q, int left, int right) {
        map<int,int>mp;
        for(int i=0;i<q.size();i++){
            int l=q[i][0];
            int r=q[i][1];
            for(int i=l;i<=r;i++)mp[i]++;
        }
        for(int i=left;i<=right;i++){
            if(mp.find(i)==mp.end())return false;
        }
        return true;
    }
};