class Solution {
public:
    int longestString(int x, int y, int z) {
        int count=0;
        if(y>x){
            count+=2*z+4*x+2;
            return count;
        }
        if(x>y){
            count+=2*z+4*y+2;
            return count;
        } 
        count+=2*(x+y)+2*z;
        return count;
    }
};