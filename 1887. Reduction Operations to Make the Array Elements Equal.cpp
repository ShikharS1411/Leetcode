#define se second
class Solution {
public:
    int reductionOperations(vector<int>& a) {
        //not at all a operation based q,its simple bbgirl just a obv huehue
        map<int,int>mp;//will store in sorted order ^.^
        for(auto x:a)mp[x]++;
        int i=0,op_req=0;
        for(auto x:mp){
            op_req+=i*x.se;
            i++;
        }
        return op_req;
    }
};