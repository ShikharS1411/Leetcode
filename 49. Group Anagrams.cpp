class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        //using map
        unordered_map<string,vector<string>>umap;//as need to return 2dstring
        //traversing a string not map 
        for(auto x:strs){
            string temp=x;//real string as need to be push in map later
            //sort and made x a key
            sort(x.begin(),x.end());
            //push this string vector in map which is mapped to its sorted string 
            umap[x].push_back(temp);
        }
        //traversing the map
        for(auto it:umap){
            //print the strings
            ans.push_back(it.second);
        }
        return ans;
    }
};