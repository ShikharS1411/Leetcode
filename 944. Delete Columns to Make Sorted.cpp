class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int count=0;
        for(int i=0;i<s[0].length();i++){
            for(int j=0;j<s.size()-1;j++){
                if(s[j][i]>s[j+1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};