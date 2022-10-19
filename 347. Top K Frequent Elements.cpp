class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //brute force with count>1 method
        //but to maintain the tc we have to apply most optimal approach i.e. heap
        //to return the most freq aka the largest elements so we'll use min heap
        
        
            //define unordered map
            unordered_map<int,int>mp;
            //count frequency of each element 
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        //transform into heap
        //define min heap
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
            for(auto it:mp){
                minh.push({it.second,it.first});
                if(minh.size()>k) minh.pop();
            }
        //store the rest of the elements in vector
        vector<int>v;
        while(!minh.empty()){
            v.push_back(minh.top().second);
            minh.pop();
        }
        return v;
    }
};