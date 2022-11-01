class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // int size=nums.size();
        //output array
//         vector<int>ans(2*n,-1);
//         for(int i=0;i<2*n;i++){
//             //for even iterations
//             if(i%2==0){
//                 ans[i]=nums[i];
//             }
//             for(int j=0;j<2*n;j++){
                
//             }
//             else {//for odd iterations
//                 ans[i]=nums[i+n-1];
//                   // ans[i+1]=nums[i];
//                  }
//         }
//         return ans;
                vector<int> ans;
        for(int i=0;i<n;i++){
            // ans[i]=nums[i];
            // ans[i+1]=nums[i+n];
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};