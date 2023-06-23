#define pb push_back
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        vector<int>temp=a[0];
        for(int i=1;i<a.size();i++){
            if(a[i][0]<=temp[1]){
                temp[1]=max(a[i][1],temp[1]);
            }
            else {
                ans.pb(temp);
                temp=a[i];
            }
        }
        ans.pb(temp);
        return ans;
    }
};