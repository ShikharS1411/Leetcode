class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        //by using heaps
        priority_queue<pair<int,int>>pq;
        //abs difference
        for(int i=0;i<arr.size();i++){
            pq.push({abs(arr[i]-x),arr[i]});
            //as the pair.first() element got automatically sorted in a heap so                 //pushing will go acc to that way 
            if(pq.size()>k) pq.pop();
        }
        vector<int>v;
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
         sort(v.begin(),v.end());
        return v;
        
    }
};