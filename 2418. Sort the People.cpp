class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        /*
        //by using hashmaps
        map<int,string>mp;
        vector<string>ans;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=names[i];//map heights to names
            // ans.push_back(mp[heights[i]]);dont do it rn as it wont be sorted
        }
        for(auto x:mp)ans.push_back(x.second);
        reverse(ans.begin(),ans.end());
        return ans;
        */
        //using max heap
        //as need to insert pair
        priority_queue<pair<int,string>>maxh;
        //to store ans
        vector<string>ans;
        //push into maxh
        for(int i=0;i<heights.size();i++) maxh.push({heights[i],names[i]});
        //elementts would be sorted acc to 1st elemet priority
        while(!maxh.empty()){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
};