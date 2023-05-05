class Solution {
public:
    bool is_vowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int i=0,n=s.size(),maxi=0,count=0;
        for(int j=0;j<n;j++){
            if(is_vowel(s[j]))count++;
            if(j-i+1==k){
                maxi=max(maxi,count);
                if(is_vowel(s[i]))count--;
                i++;
            }
        }
        return maxi;
    }
};