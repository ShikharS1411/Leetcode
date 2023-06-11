class Solution {
public:
    vector<int> goodSubsetofBinaryMatrix(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=0;j<m;j++){
                x|=(a[i][j]<<j);
            }
            v[i]=x;
        }
        for(int i=0;i<n;i++){
            if(v[i]==0)return {i};
            for(int j=i+1;j<n;j++){
                if((v[i]&v[j])==0){
                    return {i,j};
                }
            }
        }
        return {};
    }
};