class Solution {
public:
    int minFlips(int a, int b, int c) {
        int x,y,z,count=0;
        for(int i=0;i<32;i++){
            //storing every bit ki 0 h ya 1
            x=a&1;
            y=b&1;
            z=c&1;
            //4 cases
            if(z==0 && x!=0 && y!=0){
                //need to flip both bits so..
                count+=2;
            }
            else if(z==0 && x!=0 && y==0){
                //only need to flip one
                count++;
            }
           else if(z==0 && x==0 && y!=0){
                //only need to flip one
                count++;
            }
            else if(z!=0 && x==0 && y==0){
                //as for OR only 1 bit is req once
                count++;
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return count;
    }
};