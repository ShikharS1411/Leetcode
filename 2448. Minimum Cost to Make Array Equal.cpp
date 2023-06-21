#define ll long long int
class Solution {
public:
    ll solve(vector<int>& nums, vector<int>& cost, int mid){
        ll oper_cost=0;
        for(int i=0;i<nums.size();i++){
            oper_cost+=(ll)(abs(nums[i]-mid))*cost[i];
        }
        return oper_cost;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int l=*min_element(nums.begin(),nums.end());
        int r=*max_element(nums.begin(),nums.end());
        ll ans=0;
        while (l<=r){
            int mid=l+(r-l)/2;
            ll a=solve(nums,cost,mid);
            ll b=solve(nums,cost,mid+1);
            if(a<b){
                //as need to minimise
                ans=a;
                r=mid-1;
            }
            else{
                ans=b;
                l=mid+1;
            }
        }
        return ans;
    }
};