class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        /*
        //1st approach->brute force give TLE
        //as per constraints cant apply brute force approach
        long long maxi=0;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            st.clear();
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                sum+=nums[j];
                if(j-i+1==k){
                    //now check for unique elements
                    if(st.size()==k)maxi=max(maxi,sum);
                    else break;
                }
            }
        }
        return maxi;
        */
        //2nd approach->as size, so we'll apply sliding window+hashing approach(as unique/distinct is also asked)
        //distinct subarrays->which have unique elements in it
        map<int,int>mp;
        long long maxi=0,sum=0;
        for(int i=0;i<k;i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }
        //when all elements are unique
        if(mp.size()==k)maxi=max(maxi,sum);
        int i=1,j=k,n=nums.size();
        while(j<n){
            //reduce freq of i-1 indexed element
            mp[nums[i-1]]--;
            //condition check
            if(mp[nums[i-1]]==0)mp.erase(nums[i-1]);
            sum-=nums[i-1];//exclude the value of nums[i-1] from the sum
            i++;
            mp[nums[j]]++;//include it in map
            sum+=nums[j];
            if(mp.size()==k)maxi=max(maxi,sum);
            j++;
        }
        return maxi;
    }
};