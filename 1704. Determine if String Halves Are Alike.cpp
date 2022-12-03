class Solution {
public:
    bool isvalid(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }
    bool halvesAreAlike(string s) {
        int count1=0,count2=0;//as number of vowel is asked not which one
        for(int i=0;i<s.size()/2;i++){
            if(isvalid(s[i]))count1++;
        }
        for(int i=s.size()/2;i<s.size();i++){
            if(isvalid(s[i]))count2++;
        }
        // if(count1==0||count2==0)return false;//if no vowels then also return true
        return count1==count2;
    }
};