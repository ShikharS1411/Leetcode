class Solution {
public:
// https://www.youtube.com/watch?v=taNPYUaQgbs
    int dp[10001];
    int dfs(int x,int y){
        //base case
        if(x<y)return (y-x);//only inc case if needed seperatly
        if(x==y)return 0;
        if(dp[x]!=-1)return dp[x];
        int ans=1e9;//can assign diff but ek baar mei hi le rha hehe
        //good 
        if(x%11==0)ans=min(ans,1+dfs(x/11,y));//as can only do if it is mul
        //bad
        else{
            // if(x<11)ans=min(ans,11-x+1) no need to add cond as chota hoga hi toh min and dec de hi dega XD
            ans=min({ans,x%11+1+dfs(x/11,y),(11-x%11)+1+dfs(x/11+1,y)});
        }
        if(x%5==0)ans=min(ans,1+dfs(x/5,y));
        else{
            ans=min({ans,x%5+1+dfs(x/5,y),(5-x%5)+1+dfs(x/5+1,y)});
        }
        return dp[x]=min(ans,1+dfs(x-1,y));
    }
    int minimumOperationsToMakeEqual(int x, int y) {
        //x->y (high to low always)
        memset(dp,-1,sizeof(dp));
        return dfs(x,y);
    }
};