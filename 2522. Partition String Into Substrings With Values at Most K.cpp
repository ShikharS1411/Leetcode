#define ll long long int
class Solution {
public:
    int minimumPartition(string s, int k) {
        string t="";
        int count=1;
        for(int i=0;i<s.size();i++){
            t+=s[i];
            if(stoll(t)>k){
                t.clear();
                t+=s[i];
                if(stoll(t)>k)return -1;
                count++;
            }
        }
        return count;
    }
};