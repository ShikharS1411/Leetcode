class Solution {
public:
    int maximizeSum(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int n=a.size();
        int score=0;
        int x=a[n-1];
        while(k--){
            score+=x;
            x++;
        }
        return score;
    }
};