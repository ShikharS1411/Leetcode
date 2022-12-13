#define pb push_back
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*
        //wrong approach
        int n=nums.size();
        vector<int>ans(n);
        int prod=1;
        for(auto x:nums)prod=prod*x;
        for(int i=0;i<n;i++){
            ans[i]=prod/nums[i];
        }
        return ans;
        */
        int n=nums.size();
        vector<int>l(n,1);//to store all left elements for a specified element
        vector<int>r(n,1);//to store all right element for a specified element
        vector<int>ans(n,1);
        l[0]=nums[0];
        for(int i=1;i<n;i++){
            l[i]=l[i-1]*nums[i];
        }
        r[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            r[i]=r[i+1]*nums[i];
            // cout<<r[i]<<" ";
        }
        ans[0]=r[1];//as sre right wlo ka prod ek single index hi store rkhega
        ans[n-1]=l[n-2];//as as above
        for(int i=1;i<n-1;i++){
            ans[i]=l[i-1]*r[i+1];
        }
        return ans;
    }
};