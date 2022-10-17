class Solution {
public:
    int hammingWeight(uint32_t n) {
        //no of 1 bits means no of set bits
        int count=0;
        while(n){
            count++;
            n=n&(n-1);
            //sub by 1 then doing & operation will lead to the removal of a set bit from the no. n 
        }
        return count;
    }
};