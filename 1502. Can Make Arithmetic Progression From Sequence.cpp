class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        set<int>st;
        for(int i=0;i<a.size()-1;i++)st.insert(a[i+1]-a[i]);
        return st.size()==1;
    }
};