#define ll long long int
class Solution {
public:
    bool isFascinating(int n) {
        int x=2*n,y=3*n;
        string t=to_string(n)+to_string(x)+to_string(y);
        // cout<<t<<endl;
        sort(t.begin(),t.end());
        int i=1;
        for(auto x:t){
            if((x-'0')!=i)return false;
            i++;
        }
        return true;
    }
};