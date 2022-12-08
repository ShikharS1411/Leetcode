class Solution {
public:
    int reverse(int n){
        int ans=0;
        while(n>0){
            ans=(ans*10)+(n%10);
            n/=10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> umap;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=umap[reverse(nums[i])-nums[i]];
            umap[reverse(nums[i])-nums[i]]++;
        }
        long long mod=1e9+7;
        return ans%mod;
    }
};