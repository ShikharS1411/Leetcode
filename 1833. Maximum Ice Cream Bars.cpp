class Solution {
public:
    int maxIceCream(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int sum=0,count=0;
        for(auto x:a){
            sum+=x;
            if(sum>k)break;
            count++;
        }
        return count;
    }
};