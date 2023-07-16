class Solution {
public:
    int sumOfSquares(vector<int>& a) {
        int sum=0,n=a.size();
        for(int i=0;i<a.size();i++){
            int x=i+1;
            if(n%x==0)sum+=a[i]*a[i];
        }
        return sum;
    }
};