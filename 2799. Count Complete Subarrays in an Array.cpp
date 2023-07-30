#define pb push_back
class Solution {
public:
    int countCompleteSubarrays(vector<int>& a) {
        set<int>st(a.begin(),a.end());
        int c=0;
        for(int i=0;i<a.size();i++){
            set<int>s;
            for(int j=i;j<a.size();j++){
                s.insert(a[j]);
                if(s.size()==st.size())c++;
            }
        }
        return c;
        
        
    }
};