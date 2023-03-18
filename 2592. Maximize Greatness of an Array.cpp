class Solution {
public:
    int maximizeGreatness(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        int i=0,count=0;
        for(int j=1;j<n;j++){
            if(a[i]<a[j]){
                count++;
                i++;
            }
        }
        return count;
    }
};