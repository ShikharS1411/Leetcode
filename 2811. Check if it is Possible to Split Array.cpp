class Solution {
public:
    bool canSplitArray(vector<int>& a, int m) {
        int n=a.size();
        if(n==1 || n==2)return true;
        for(int i=0;i<n-1;i++){
            if(a[i]+a[i+1]>=m)return true;
        }
        return false;
    }
};