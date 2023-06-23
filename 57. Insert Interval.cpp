#define pb push_back
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        // first insert then merge ez 
        a.pb(b);
        // for(int i=0;i<a.size();i++)cout<<a[i][0]<<" "<<a[i][1]<<"  ";
        // return {{0}};
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