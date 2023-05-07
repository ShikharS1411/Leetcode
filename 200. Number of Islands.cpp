class Solution {
public:
    //to handle edge case
    bool isvalid(int i,int j,int n,int m,vector<vector<char>>&a){
        if(i>=0 && i<n && j>=0 && j<m && a[i][j]=='1')return true;
        return false;
    }
    void dfs(int i,int j,int n,int m,vector<vector<char>>&a){
        //up,down,right,left check rec call kr do ez,but dont forget the edge case
        a[i][j]='0';
        //up
        if(isvalid(i-1,j,n,m,a))dfs(i-1,j,n,m,a);
        //down
        if(isvalid(i+1,j,n,m,a))dfs(i+1,j,n,m,a);
        //left
        if(isvalid(i,j-1,n,m,a))dfs(i,j-1,n,m,a);
        //right
        if(isvalid(i,j+1,n,m,a))dfs(i,j+1,n,m,a);
    }
    int numIslands(vector<vector<char>>& a) {
        //using dfs ez
        int n=a.size(),m=a[0].size(),count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='1'){
                    //rec dfs call hoga
                    count++;//only inc when unconnected/different island
                    //bki "connected" sb dfs handle kr lega
                    dfs(i,j,n,m,a);
                }
            }
        }
        return count;
    }
};