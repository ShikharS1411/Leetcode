class Solution {
public:
    int maxProfit(vector<int>& p) {
        int prof=0;
        for(int i=0;i<p.size()-1;i++){
            if(p[i+1]>p[i])prof+=p[i+1]-p[i];
        }
        return prof;
    }
};