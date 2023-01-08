class Solution {
public:
    int maximumCount(vector<int>& a) {
        int pos=0,neg=0;
        for(auto x:a){
            if(x<0)neg++;
            else if(x>0)pos++;
        }
        int ans=max(pos,neg);
        return ans;
    }
};