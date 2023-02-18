#define pb push_back
class Solution {
public:
    int minimizeSum(vector<int>& a){
        //can do soprting no change of index value issue lol
        sort(a.begin(),a.end());
        int n=a.size();
        /*
        1->1l 1h change
        2->2l change
        3->2h change
        */
        return min({a[n-2]-a[1],a[n-1]-a[2],a[n-3]-a[0]});
    }
};