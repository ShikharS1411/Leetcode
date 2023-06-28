#define ll long long int
#define fi first
#define se second
class Solution {
public:
    /*
    static bool comp(vector<int>&x,vector<int>&y){
        //jaise sort krna return true
        if(x[1]<y[1])return true;
        return false;
    }
    bool carPooling(vector<vector<int>>& a, int k) {
        //merge intervals :/
        //already sorted acc "from"
        //ok this shit is not sorted (>_<)*
        sort(a.begin(),a.end(),comp);
        pair<int,int>temp={a[0][1],a[0][2]};
        ll sum=a[0][0];
        if(sum>k)return false;
        for(int i=1;i<a.size();i++){
            if(a[i][1]<temp.se){//no need <= as better to handle in next turn
                sum+=a[i][0];
                if(sum>k)return false;
                temp.se=max(a[i][1],temp.se);
            }
            else{
                sum=a[i][0];
                if(sum>k)return false;
                temp={a[i][1],a[i][2]};
            }
        }
        return true;
*/
    bool carPooling(vector<vector<int>>& trips, int k) {
        int v[1001];
        memset(v, 0, sizeof(v));
        for(int i=0;i<trips.size();i++){
            int a = trips[i][1];
            int b = trips[i][2];
            for(int j=a ; j<b; j++){
                v[j]+=trips[i][0];            
            }
        }
        for(int i=0;i<=1000;i++){
            if(v[i]>k){
                return false;
            }
        }
        return true;
    }
};