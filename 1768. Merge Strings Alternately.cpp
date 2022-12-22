class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i=0,j=0,n=s1.size(),m=s2.size();
        string ans="";
        while(i<n || j<m){
            if(i<n)ans+=s1[i];
            if(j<m)ans+=s2[j];
            i++,j++;
        }
        return ans;
    }
};