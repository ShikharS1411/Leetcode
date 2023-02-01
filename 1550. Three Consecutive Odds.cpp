class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        //can take 3 window size and apply basic sliding window 
        int n=a.size();
        for(int i=0;i<n-2;i++){
            if(a[i]&1 && a[i+1]&1 && a[i+2]&1)return true;
        }
        return false;
    }
};