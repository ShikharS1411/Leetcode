class Solution {
public:
    int captureForts(vector<int>& a) {
        vector<int>b;
        int n=a.size(),maxi=0;
        for(int i=0;i<n;i++){
            if(a[i]==1||a[i]==-1)b.push_back(i);
        }
        int m=b.size();
        //edge case
        if(m==0)return maxi;
        for(int i=0;i<m-1;i++){
            if(a[b[i]]+a[b[i+1]]==0){
                maxi=max(maxi,abs(b[i+1]-b[i])-1);
            }
        }
        return maxi;
    }
};