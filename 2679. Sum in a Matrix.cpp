#define pb push_back
class Solution {
public:
    int matrixSum(vector<vector<int>>& a) {
        int score=0;
        int n=a.size(),m=a[0].size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<m;j++)temp.pb(a[i][j]);
            sort(temp.rbegin(),temp.rend());
            v.pb(temp);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)cout<<v[i][j]<<" ";
            cout<<endl;
        }
        // return -1;
        // int maxi=0;
        for(int i=0;i<m;i++){
            int maxi=0;
            for(int j=0;j<n;j++)maxi=max(maxi,v[j][i]);
            score+=maxi;
        }
        return score;
    }
};