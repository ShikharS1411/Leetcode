#define ll long long int
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& a) {
        ll count=0,sum=0;
        int mini=1e9;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(a[i][j]<0)count++;
                mini=min(mini,abs(a[i][j]));
                sum+=abs(a[i][j]);
            }
        }
        if(count%2==0)return sum;
        return sum-2*mini;
    }
};