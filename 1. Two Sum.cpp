class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        //1st appraoch by using hashmaps
        //using hashmaps
         unordered_map<int,int>m;        
        for(int i=0; i<nums.size(); i++){            
            if(m.find(target-nums[i])!=m.end()){
                return {i,m[target-nums[i]]};                              
            }
            m[nums[i]]=i;
        }
        return {};
        */
        //2nd appraoch by usng two pointers
        //in order to return corresponding index we will first store elements ans             their respective index in a vector pair
        
        vector<pair<int,int>>v;
        for(int k=0;k<nums.size();k++){
            v.push_back({nums[k],k});//push the pairs
        }
        //do sort and use two pointers
        sort(v.begin(),v.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum=v[i].first+v[j].first;
            if(sum==target){
                return {v[i].second,v[j].second};
                // i++,j--; as exactly one sol
            }
            else if (sum<target) i++;
            else j--;
        }
        return {};
        
    }
};