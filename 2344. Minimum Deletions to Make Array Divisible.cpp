class Solution {
public:
    int minOperations(vector<int>& a, vector<int>& d) {
        sort(a.begin(),a.end());
        int g=0;
        for(auto x:d)g=__gcd(g,x);
        int i=0;
        for(auto x:a){
            if(g%x==0)return i;
            i++;
        }
        return -1;
    }
};