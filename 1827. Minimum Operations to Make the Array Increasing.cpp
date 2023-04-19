class Solution {
public:
    int minOperations(vector<int>& a) {
        int count=0;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>=a[i+1]){
                int diff=a[i]-a[i+1]+1;
                count+=diff;
                a[i+1]+=diff;
            }
        }
        return count;
    }
};