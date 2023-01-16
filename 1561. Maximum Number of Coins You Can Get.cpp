class Solution {
public:
    int maxCoins(vector<int>& p) {
        int sum=0;
        sort(p.rbegin(),p.rend());
        int count=p.size()/3;
        int i=1;//as 0 based ind
        while(count--){
            sum+=p[i];
            i+=2;
        }
        return sum;
    }
};