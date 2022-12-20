class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        //edge case
        /*
        //will give tle
        if(l==r)return l;
        int ans=l;
        for(int i=l+1;i<=r;i++)ans=ans&i;
        return ans;
        */
        //2147483647->2^31 -1
        int count = 0;
        while(l != r){
            l>>=1;
            r>>=1;
            count++;   
        }
        return (r<<count);
    }
};