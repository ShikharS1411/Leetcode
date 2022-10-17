class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //given a binary no reverse the bits and the make a no outta it by default in built
        //eg->12(1100) reverse bits->0011(ans->3)
        //dont make the no and reverse it lol its wrong
        int position=0,ans=0;
        while(n){
            if(n%2){//1st(from left)digit is 1
                ans+=(1<<(31-position));//reverse order mei 2^power(as left shift) ko add kr rhe
            }
            n=n>>1;//right shift krke jo calculations ho gyi uski bit ko hata rhe
            position++;//aage badha rhe
        }
        return ans;
    }
};