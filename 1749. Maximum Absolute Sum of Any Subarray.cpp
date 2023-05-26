class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int maxi=0,pos=0,neg=0;
        for(auto x:a){
            pos+=x;
            if(pos<0)pos=0;
            neg+=x;
            if(neg>0)neg=0;
            maxi=max({maxi,pos,-neg});
        }
        return maxi;
    }
};