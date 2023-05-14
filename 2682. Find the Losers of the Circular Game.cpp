#define pb push_back
class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool>visited(n,false);
        int i=1,turn=1;
        while(visited[i-1]!=true){
            visited[i-1]=true;
            if((i+(turn*k))%n==0)i=n;
            else i=(i+(turn*k))%n;
            turn++;
        }
        vector<int>ans;
        i=1;
        for(auto x:visited){
            if(x==false)ans.pb(i);
            i++;
        }
        return ans;
    }
};