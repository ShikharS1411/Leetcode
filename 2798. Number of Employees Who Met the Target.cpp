class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& a, int k) {
        int c=0;
        for(auto x:a)if(x>=k)c++;
        return c;
    }
};