class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //using sets but can use maps as well 
        /*
        unordered_set<int>s;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        int count=0;
        for(int i=0;i<nums2.size();i++){
            int key=nums2[i];
            if(s.find(key)!=s.end()) {
                count++;
                s.erase(key);//common elements can be multiple so need to erase
            }
        }
        ans.push_back(count);
        return ans;
        */
        unordered_set<int>set;
        vector<int>ans;
        for(auto x : nums1)
            set.insert(x);
        for(auto x : nums2)
        {
            if(set.find(x) != set.end())
            {
                ans.push_back(x);
                set.erase(x);
            }
        }
        return ans;
    }
};