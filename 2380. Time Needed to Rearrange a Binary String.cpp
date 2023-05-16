class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        //in short group all the ones to left and zeros to the right
        //can go for brute force
        string t=s;
        sort(t.rbegin(),t.rend());
        int count=0,n=s.size();
        while(t!=s){
            for(int i=0;i<n-1;i++){
                if(s[i]=='0' && s[i+1]=='1'){
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
            count++;
        }
        return count;
    }
};