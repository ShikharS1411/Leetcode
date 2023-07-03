class Solution {
public:
    int check(vector<int>&a,int th,int i,int j){
        if(a[i]%2 || a[i]>th)return false;
        for(int k=i+1;k<=j;k++){
            int y=a[k];
            if(a[k]>th)return false;
            if((a[k-1]%2)==(a[k]%2))return false;
        }
        return true;
    }
    int longestAlternatingSubarray(vector<int>& a, int th) {
        int maxi=0;
        for(int i=0;i<a.size();i++){
            for(int j=i;j<a.size();j++){
                if(check(a,th,i,j))maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};