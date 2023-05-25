class Solution {
public:
    int minIncrementForUnique(vector<int>& a) {
        sort(a.begin(),a.end());
        int count=0;
        for(int i=1;i<a.size();i++){
            if(a[i]<=a[i-1]){
                count+=(a[i-1]-a[i])+1;
                a[i]=a[i-1]+1;
            }
        }
        return count;
    }
};