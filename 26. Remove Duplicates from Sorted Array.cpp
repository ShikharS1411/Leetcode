class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*
        set<int>s;
        vector<int>ans;
        for(auto x:nums) s.insert(x);
        for(auto x:s) ans.push_back(x);
        return ans;//but the function is not vector type so cant do like this
        
        More precise
    #include<bits/stdc++.h>
    using namespace std;
    void removeDuplicates(vector<int>& nums) {
        set<int>s;
        vector<int>ans;
        for(auto x:nums) s.insert(x);
        for(auto x:s) ans.push_back(x);
        for(auto x:ans) cout<<&x<<" ";
    }
    int main(){
        vector<int>nums={0,0,1,1,1,2,2,3,3,4};
        removeDuplicates(nums);
        return 0;
    }   
        */
        //two pointer approach
        //edge case
        if(nums.size()==0) return 0;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];//so that now i would be get changed to next no.
            }
        }
        return i+1;//as i is index
        /*
                vector<int>vec = nums;
        vec.erase(unique(vec.begin(),vec.end()),vec.end());
        unique(nums.begin(),nums.end());
        return vec.size();
        */
    }
};