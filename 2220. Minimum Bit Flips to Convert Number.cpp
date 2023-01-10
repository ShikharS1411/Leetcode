class Solution {
public:
    int minBitFlips(int s, int g) {
        //count no of set bit in the xored ans
        int ans=s^g;
        //int count=0;
        // while(ans){
        //     if(ans&1)count++;
        //     ans=ans>>1;
        // }
        // return count;
        return __builtin_popcount(ans);//function use to count no of set bits 
    }
};