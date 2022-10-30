class Solution {
public:
    char repeatedCharacter(string s) {
        /*
        //using hashmaps
        unordered_map<char,int>umap;
        for(auto x:s){
            if(umap.find(x)!=umap.end())return x;
            umap[x]++;
        }
        return ' ';
        */
        // by creating freq array
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;//0->25 values would be there
            if(freq[s[i]-'a']==2)return s[i];
        }
        return ' ';
    }
};