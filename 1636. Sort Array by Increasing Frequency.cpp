class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // by using max heap
        unordered_map<int,int>umap;
        for(auto x:nums)umap[x]++;
        priority_queue<pair<int,int>>maxh;
        for(auto x:umap){
            maxh.push({-x.second,x.first});//- lga ke daal denge usse lest freq wla max bn jyega aur pop krne ke time seedha result aa jyega
        }
        vector<int>temp;
        while(!maxh.empty()){
            //to print acc to freq
            int freq = maxh.top().first;
            int element = maxh.top().second;
            for(int i=1;i<=abs(freq);i++){
                temp.push_back(element);
            }
            maxh.pop();
        }
    return temp;
    }
};