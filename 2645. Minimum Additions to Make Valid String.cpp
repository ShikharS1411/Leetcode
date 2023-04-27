class Solution {
public:
    int addMinimum(string s) {
        string t="abc";
        int i=0,j=0,n=s.size(),count=0;
        while(i<n){
            if(s[i]==t[j])i++,j++;
            else if(s[i]!=t[j])count++,j++;
            if(j>2)j=0;
        }
        if(j!=0)count+=3-j;
        return count;
    }
};