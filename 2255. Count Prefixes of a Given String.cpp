class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int count=0;
        for(string x:words){
            //from 0,as only prefixes
            string temp=s.substr(0,x.size());
            if(temp==x)count++;
        }
        return count;
        
    }
};