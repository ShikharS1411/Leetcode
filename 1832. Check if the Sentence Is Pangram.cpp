class Solution {
public:
    bool checkIfPangram(string t) {
        //no need to create freq array->vector<int>f(26,0) will increase space
        //edge case
        if(t.size()<26)return false;
        set<char>s;
        for(auto x:t)s.insert(x);
        if(s.size()==26) return true;
        return false;
    }
};
// 2nd approach by using freq array  
       vector<int>v(26,0);
        for(char c:sentence) v[c-'a']++;
        
        for(int x:v) if(x==0) return false;
        return true;