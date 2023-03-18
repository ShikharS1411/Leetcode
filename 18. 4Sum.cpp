class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        /*
        // 1st appraoch using sets
        set<vector<int>>s;
        //2d vector to store ans
        vector<vector<int>>ans;
        //edge case 
        if(nums.size()<4) return {};
        //using two pointer approach
        sort(nums.begin(),nums.end());
        //fix two indexes
        for(int a=0;a<nums.size()-2;a++){
            if(a>0 && nums[a]==nums[a-1]) continue;//skips the entire loop of                                                            that b(prev b++)
            for(int b=a+1;b<nums.size()-1;b++){
                //condition check for dublicates
                if(b>a+1 && nums[b]==nums[b-1]) continue;//skips the entire loop of                                                            that b(prev b++)
                int c=b+1,d=nums.size()-1;
                while(c<d){
                    // long sum=nums[a]+nums[b]+nums[c]+nums[d];
                    if((long)nums[a]+nums[b]+nums[c]+nums[d]==target){
                        s.insert({nums[a],nums[b],nums[c],nums[d]});
                        c++,d--;
                    }
                    else if((long)nums[a]+nums[b]+nums[c]+nums[d]<target) c++;
                    else d--;
                }
            }
        }

        for(auto x:s)ans.push_back(x);
        return ans;
        */
        //2nd approach using two pointers o(n3)
        //to store ans
        vector<vector<int>>ans;
        //sort 
        sort(nums.begin(),nums.end());
        //fix first two indexes
        for(int a=0;a<nums.size()-2;a++){
            //condition check for dublicates
            if(a>0 && nums[a]==nums[a-1]) continue;//skips the entire loop for that a(prev a++);
            for(int b=a+1;b<nums.size()-1;b++){
            //condition check for dublicates
            if(b>a+1 && nums[b]==nums[b-1]) continue;//skips the entire loop for that b(prev b++);
                //define two pointers
                int c=b+1,d=nums.size()-1;
                while(c<d){
                    long long sum=nums[a]+nums[b]+nums[c]+nums[d];
                    //condition check
                    if(sum==target){
                        ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                        c++,d--;
                        //to avoid dublicates
                        while(c<d && nums[c]==nums[c-1]) c++;
                        while(c<d && nums[d]==nums[d+1]) d--;
                    }
                    else if(sum<target) c++;
                    else d--;
                }
            }
        }
        return ans;
    }
};