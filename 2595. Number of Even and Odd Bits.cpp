class Solution {
public:
    vector<int> evenOddBit(int n) {
        int i=0,ce=0,co=0;
        while(n){
            //check first bit
            if(n&1){
                if(i&1)co++;
                else ce++;
            }
            n=n>>1;
            i++;
        }
        return {ce,co};
    }
};