class Solution {
public:
    string frequencySort(string s) {
        /*
        1st approach-.using heaps
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
            
            //can do it by like this as well
            // pair<int,char> a;
            // a = qq.top();
            // qq.pop();
            // while(a.first--)
            // {
            //     ans+=a.second;
            // }
            // maxh.pop();
        }
        return temp;
        */
        //2nd appraoch->using lambda function
        unordered_map<char,int>umap;
        for(auto x:s)umap[x]++;
        sort(s.begin(),s.end(),[&](char a,char b){
           return umap[a]==umap[b]?a<b:umap[a]>umap[b];
        });
        return s;
    }
};