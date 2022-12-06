class Solution {
public:
    bool isPerfectSquare(int num) {
        /*
        //to make perfect square
        int x=sqrt(num);
        if(x*x==num)return true;
        return false;
        */
        //classic binary search approach
        int i=1;//starting pointer
        int j=(1<<31-1);//way to represent the last element i.e 2^31-1
        while(i<j){
            int mid=i+(j-i)/2;
            long long ans=(long long)mid*mid;//as sqaring 2^31-1(worst case)
            if(ans==(long long)num)return true;
            else if(ans>(long long)num)j=mid-1;
            else i=mid+1;
        }
        if((long long)i*i==(long long)num)return true;
        return false;
    }
};