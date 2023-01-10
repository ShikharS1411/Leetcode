class Solution {
public:
    int minBitFlips(int s, int g) {
        //count no of set bit in the xored ans
        int ans=s^g,count=0;
        while(ans){
            if(ans&1)count++;
            ans=ans>>1;
        }
        return count;
    }
};