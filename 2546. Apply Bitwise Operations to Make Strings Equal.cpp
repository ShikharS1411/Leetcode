class Solution {
public:
    bool makeStringsEqual(string s, string t) {
        if(s==t)return true;
        int pos1=s.find('1'),pos2=t.find('1');
        if(pos1==-1)return false;
        if(pos2==-1)return false;
        return true;
    }
};