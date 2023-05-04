#define fi first
#define se second
class Solution {
public:
    int firstCompleteIndex(vector<int>& a, vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<int>row(n,0),col(m,0);
        unordered_map<int,pair<int,int>>umap;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)umap[mat[i][j]]={i,j};
        }
        for(int i=0;i<a.size();i++){
            int r=umap[a[i]].fi,c=umap[a[i]].se;
            row[r]++,col[c]++;
            if(row[r]==m||col[c]==n)return i;
        }
        return -1;
    }
};