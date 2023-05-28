#define ll long long int
class Solution {
public:
    long long minimumCost(string s) {
        int n=s.size();
        ll sum=0;
        //just do for all cf q 
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                int left=i+1;
                int right=n-1-i;
                sum+=min(left,right);
            }
        }
        return sum;
    }
};