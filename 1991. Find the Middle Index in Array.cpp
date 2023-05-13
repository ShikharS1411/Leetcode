#define pb push_back
class Solution {
public:
    int findMiddleIndex(vector<int>& a) {
        //brute force ez
        int n=a.size();
        for(int i=0;i<n;i++){
            int l=0,r=0;
            for(int j=0;j<i;j++)l+=a[j];
            for(int j=i+1;j<n;j++)r+=a[j];
            if(l==r) return i;
        }
        return -1;
    }
};