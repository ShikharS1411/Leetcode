class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        
        // int ans[n][m];
         vector<vector<int>>ans(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=i,y=j;
                int tl=0,br=0;
                set<int>st1,st2;
                while(x-1>=0 && y-1>=0){
                    x--,y--;
                    st1.insert(a[x][y]);
                    
                }
                x=i,y=j;
                tl=st1.size();
                while(x+1<m && y+1<n){
                    x++,y++;
                    st2.insert(a[x][y]);
                    
                }
                br=st2.size();
                ans[i][j]=abs(tl-br);
            }
        }
        return ans;
    }
};