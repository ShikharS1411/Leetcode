class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        //1st approach
        /*
        int count=0;
        for( string x:words){
            if(s.find(x)<1)count++;
        }
        return count;
        */
        //2nd approach
        int count=0;
        for(string x:words){
            //from 0,as only prefixes
            string temp=s.substr(0,x.size());
            if(temp==x)count++;
        }
        return count;
        
    }
};