class Solution {
public:
    int countDigits(int n) {
        int count=0;
        int temp=n;
        while(temp){
            int x=temp%10;
            if(n%x==0)count++;
            temp=temp/10;
        }
        return count;
    }
};