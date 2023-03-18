#define fi first
#define se second
class Solution {
public:
    bool check(unordered_map<char,int>&umap){
        for(auto x:umap){
            if(x.se>1)return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        //revisited code
        unordered_map<char,int>umap;
        int i=0,maxi=0;
        for(int j=0;j<s.size();j++){
            umap[s[j]]++;
            if(check(umap))maxi=max(maxi,j-i+1);
            else{
                umap[s[i]]--;
                if(umap[s[i]]==0)umap.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};