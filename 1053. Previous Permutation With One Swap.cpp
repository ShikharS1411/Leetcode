class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& a) {
        if(is_sorted(a.begin(),a.end()))return a;
        int n=a.size();
        int i,j=n-1;
        for(i=n-2;i>=0;i--){
            if(a[i+1]<a[i])break;
        } 
        while((a[j]>=a[i] && i<j) || (a[j-1]==a[j]))j--;
        swap(a[i], a[j]);
         return a;   
    }
};