class Solution {
public:
    bool isPalindrome(int x) {
        /*
        long long rev=0,temp=x,digit;
        while(x){//as all neg no(s) will not be palindrome
        digit=x%10;
        rev=rev*10+digit;
        x/=10;   
        }
        // if(temp==rev) return true;
        // return false;
        return temp==rev;
        */
        //stoi approach
        //edge case
        if(x<0)return false;
        string s=to_string(x);//convert x into strong "x"
        reverse(s.begin(),s.end());
        // int num=stoi(s);instead of stoi do stoll(long long)
        long long num=stoll(s);
        return num==x;
    }
};