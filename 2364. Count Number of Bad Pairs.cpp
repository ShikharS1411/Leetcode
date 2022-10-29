class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        //cant apply brute force as range is high
        //no of bad pairs=Total pairs-good pairs
        //good pairs of same element so will - from map
        map<long long,long long>m;
        long long n=nums.size();
        //store freq
        // for(auto x:nums)m[x]++;cant do this as good pair wont be the ones with same elements as per the constrainsts given
        for(int i=0;i<n;i++){
            m[nums[i]-i]++;//stores only good pairs whose j-i=nums[j]-nums[i] for the edge cases like 1,2,3,4,5
        }
        //total count of pairs i.e considering all elements pair
        long long tcount=n*(n-1)/2;
        for(auto x:m){
            //bad pairs=totalcount-good pairs
            //good pairs which are formed by same value(elements)
            tcount-=x.second*(x.second-1)/2;
        }
        return tcount;
    }
};