class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int i=0,c0=0;
        int maxi=0;
        int n=a.size();
        for(int j=0;j<n;j++){
            if(a[j]==0)c0++;
            while(c0>k){
                if(a[i]==0)c0--;
            i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};