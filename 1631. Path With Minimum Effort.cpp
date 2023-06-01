class Solution {
public:
    bool check(int i,int j,int n,int m,int mid,vector<vector<int>>&vis,vector<vector<int>>&h){
        //check for mid->is it a suitable ans or not
        //using dfs callings
        //check ki agr mid lekr end tk paucha toh this can be ans return true 
        if(i==n-1 && j==m-1)return true;
        //mark as visited
        vis[i][j]=1;
        //dfs calling only when abs()-mid exits
        //up,down,left,right
        int drow[4]={-1,1,0,0};
        int dcol[4]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int row=i+drow[k];
            int col=j+dcol[k];
            //                       previous
            // int diff=abs(h[row][col]-h[i][j]);
            //for dfs call validity
            if(row>=0 && col>=0 && row<n && col<m && vis[row][col]==0 && abs(h[row][col]-h[i][j])<=mid){
                if(check(row,col,n,m,mid,vis,h)==true)return true;
            }
        }
        return false;
    }
    int minimumEffortPath(vector<vector<int>>& h) {
        //using dfs+BS(as max of min)
        int l=0,r=1e6;//best and worst case possiblites
        int ans=0;
        int n=h.size(),m=h[0].size();
        while(l<=r){
            //need to make a new visited array every time,as need to compare all mid values
            vector<vector<int>>vis(n,vector<int>(m,0));
            int mid=l+(r-l)/2;
            if(check(0,0,n,m,mid,vis,h)){
                //as need to minimise
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
