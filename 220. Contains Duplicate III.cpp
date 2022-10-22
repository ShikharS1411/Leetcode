class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        /*i != j,
abs(i - j) <= indexDiff.
abs(nums[i] - nums[j]) <= valueDiff
*/
        /*
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            if(umap.find(nums[i])!=umap.end()){
                if(i!=umap[nums[i]]&&i-umap[nums[i]]<=indexDiff&&valueDiff-nums[i]>=nums[i])return true;
            }
            umap[nums[i]]=i;                      
        }
        return false;
        */
        /*
        //brute force-> apply long long
        vector<pair<int, int>> v(nums.size());
        for(int i = 0; i < nums.size(); i++){
           v[i].first = nums[i];
           v[i].second = i;
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            for(int j = i+1; j < v.size(); j++){
                if((long long)(abs(v[i].first - v[j].first) <= valueDiff)&&(abs(v[i].second - v[j].second) <= indexDiff))return true;
            }
        }
        return false;
        */
        vector<pair<int, int>>v;
        for(int i=0;i<nums.size();i++){
           // v[i].first = nums[i];
           // v[i].second = i;
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if((long long)abs(v[i].first-v[j].first)<=valueDiff){
                    if((long long)abs(v[i].second-v[j].second)<=indexDiff)
                        return true;
                } 
                else break;
            }
        }
        return false;
    }
};