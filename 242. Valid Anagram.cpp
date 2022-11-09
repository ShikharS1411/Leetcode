class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        1st approach->sorting o(nlogn)
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        */
        //2nd approach->hashing
        unordered_map<char,int>umap;
        //edge case
        if(s.size()!=t.size())return false;
        for(auto x:s)umap[x]++;
        for(int i=0;i<t.size();i++){
            //when element not found or its freq became zero
            if(umap.find(t[i])==umap.end()or umap[t[i]]==0) return false;
            else umap[t[i]]--;
        }
        return true;
    }
};