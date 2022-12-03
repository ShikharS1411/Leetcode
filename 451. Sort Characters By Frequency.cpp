class Solution {
public:
    string frequencySort(string s) {
        //can do in o(n) and o(nlogn)
        unordered_map<char,int>umap;
        for(auto x:s)umap[x]++;
        //use max heap
        priority_queue<pair<int,char>>maxh;
        for(auto x:umap){
            maxh.push({x.second,x.first});
        }
        string temp="";
        while(!maxh.empty()){
            // temp+=maxh.top().append(maxh.top().first,maxh.top().second);
            int freq=maxh.top().first;
            char element=maxh.top().second;
            for(int i=0;i<freq;i++){
                temp+=element;
            }
            maxh.pop();
        }
        return temp;
    }
};