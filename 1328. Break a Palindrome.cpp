class Solution {
public:
    string breakPalindrome(string s) {
        /*
        //as given the string is already a palindrome
        int n=s.size();
        //edge case
        if(n==1) return "";//empty string
        //to deal even and odd cases
        for(int i=0;i<n;i++){
            //        odd with mid element and cant change it otherwise palin. to itself
            if(s[i]>'a'&& i!=n/2){
                s[i]='a';//as by changing just one with least char i.e. a will make it as non palindrome and lexicographically smallest
                return s;
            }
        }
        //this cond means that all char in palindromic string is a so just need to change the last one to make it non palindrome and lexicographically smallest
        s[n-1]='b';
        return s;
        */
        int n=s.size();
        if(n==1) return "";
        //n/2 as after that the same element occurs as palindrome also cant change n/2 element if odd else would be even still dont matter
        for(int i=0;i<n/2;i++){
            if(s[i]!='a'){
                s[i]='a';
                return s;
            }
        }
        s[n-1]='b';
        return s;
    }
};