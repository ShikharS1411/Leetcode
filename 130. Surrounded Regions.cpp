class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<char>>& a){
        if(i<0||j<0||i>=n||j>=m||a[i][j]=='X'||a[i][j]=='#')return;
        if(a[i][j]=='O')a[i][j]='#';//make boundary/boundary connected O(s)as garbage char 
        //up
        dfs(i-1,j,n,m,a);
        //down
        dfs(i+1,j,n,m,a);
        //left
        dfs(i,j-1,n,m,a);
        //right
        dfs(i,j+1,n,m,a);
    }
    void solve(vector<vector<char>>& a) {
        //can do basic iteration as [xxx][xoo][xoo]wont return just two oo rowise as they are not surrounder by x instead with two edge o(s)as well,so need a proper dfs travsing
        
        //"regions" not zeros :P
        int n=a.size(),m=a[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //jo bhi edge se connected hoge kbhi 4 surrounded nhi ho skte 
                if(a[i][j]=='O'&&(i==0||i==n-1||j==0||j==m-1))dfs(i,j,n,m,a);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //bad ones
                if(a[i][j]=='#')a[i][j]='O';
                //good ones
                else if(a[i][j]=='O')a[i][j]='X';
            }
        }
    }
};