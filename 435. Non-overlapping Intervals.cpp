class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[1]<b[1])return true;
        return false;
      }
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        int count=0,n=a.size();
        sort(a.begin(),a.end(),comp);
        int temp=a[0][1];
        for(int i=1;i<n;i++){
            if(a[i][0]<temp) count++;
            else temp=a[i][1];
        }
        return count;
    }
};