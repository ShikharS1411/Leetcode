class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        /*
        //brute force
        int count=0;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
            //edge case
            if(nums[i]==k)count++;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k)count++;
            }
        }
        return count;
        */
        /*
        //optimal approach->sliding window but giving tle -_-
        int i=0,j=0,sum=0,count=0;
        while(j<nums.size()){
            sum+=nums[j];//windowsize=j-i+1
            if(sum<k)j++;
            else if(sum==k){
                count++;
                sum-=nums[i];
                i++,j++;//cant do this here as not specified that it will contains only +ve integers,so need to make more cases to counter this ,thus tle would be there as well
            }
        }
        return count;
        */
        //memorise this approach lol
        int n=nums.size();
        int count=0;
        unordered_map<int, int> prefsum;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k)count++;
            if(prefsum.find(sum-k) != prefsum.end())count+=prefsum[sum-k];
            prefsum[sum]++;
        }
        return count;
    }
};