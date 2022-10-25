class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>umap;
        int i=0,j=0,maxi=0;
        while(j<s.size()){
            //store count of every char of the substring in a map
            umap[s[j]]++;
            if(umap.size()>j-i+1) j++;
            if(umap.size()==j-i+1){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(umap.size()<j-i+1){
                while(umap.size()<j-i+1){
                    umap[s[i]]--;
                    if(umap[s[i]]==0) umap.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxi;
    }
};