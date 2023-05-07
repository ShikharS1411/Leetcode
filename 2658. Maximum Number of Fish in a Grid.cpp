class Solution {
public:
    void dfs(int i,int j,int n,int m,vector<vector<int>>&a,int &count){//pass by ref of every changing val :D
        //can make a is valid func as well ,but this ez
        if(i<0||j<0||i>=n||j>=m||a[i][j]==0)return;
        count+=a[i][j];
        a[i][j]=0;
        //up
        dfs(i-1,j,n,m,a,count);
        //down
        dfs(i+1,j,n,m,a,count);
        //left
        dfs(i,j-1,n,m,a,count);
        //right
        dfs(i,j+1,n,m,a,count);
    }
    int findMaxFish(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size(),maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]>0){
                    //at every disconnectivity a new dfs would be called
                    int count=0;//to store no of fishes
                    dfs(i,j,n,m,a,count);
                    maxi=max(maxi,count);
                }
            }
        }
        return maxi;
    }
};