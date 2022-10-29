class Solution {
public:
    string oddString(vector<string>& words) {
        //need to use hashing similar to group anagrams
        //apply brute force as per constraints range
        map<vector<int>,vector<string>>umap;
        //this will iterate the strings
        for(auto x:words){//x will be a string
            vector<int>temp;//key
            for(int i=1;i<x.size();i++){
                temp.push_back((int)x[i]-(int)x[i-1]);
            }
            umap[temp].push_back(x);
        }
        for(auto x:umap){
            if(x.second.size()==1)return x.second[0];//as return type is string not vector
        }
        return "";//else return empty string
    }
};