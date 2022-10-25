class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,temp=x,digit;
        while(x){//as all neg no(s) will not be palindrome
        digit=x%10;
        rev=rev*10+digit;
        x/=10;   
        }
        if(temp==rev) return true;
        return false;
    }
};