class Solution {
public:
    int semiOrderedPermutation(vector<int>& a) {
        int ind1=-1,ind2=-1;
        int n=a.size();
        int i=0;
        for(auto x:a){
            if(x==1)ind1=i;
            if(x==n)ind2=i;
            i++;
        }
        if(ind1>ind2){
            return ind1+(n-1-ind2-1);
        }
        return ind1+(n-1-ind2);
    }
};