class Solution {
public:
    int longestSubarray(vector<int>& a){
        int lastzero=-1,i=0,j,ans=0, n=a.size();
        for(j=0;j<n;j++){
            if(a[j]==0){
                ans=max(ans,j-i-1);
                i=lastzero+1;
                lastzero=j; 
            }
        }
        ans=max(ans,j-i-1);
        return ans;
    }
};