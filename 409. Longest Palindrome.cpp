class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>umap;
        for(auto x:s)umap[x]++;
        int ans=0;
        for(auto x:umap){
            if(x.second%2==0)ans+=x.second;
            else if(x.second>2 && x.second%2==1)ans+=x.second-1;
        }
        // cout<<ans<<endl;
        for(auto x:umap){
            if(x.second%2==1){
                ans++;
                break;
            }
        }
        return ans;
    }
};