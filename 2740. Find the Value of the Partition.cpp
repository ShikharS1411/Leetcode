class Solution {
public:
    int findValueOfPartition(vector<int>& a) {
        sort(a.begin(),a.end());
        int mini=1e9;
        for(int i=0;i<a.size()-1;i++){
            int diff=a[i+1]-a[i];
            mini=min(mini,diff);
        }
        return mini;
    }
};