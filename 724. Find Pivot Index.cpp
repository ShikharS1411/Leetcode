class Solution {
public:
    int pivotIndex(vector<int>& nums)  {
        //using prefix sum concept with a touch of two pointers
        /*not completely proper approach
        int n=nums.size(),i=0,j=n;//indexing acc to pref array
        int pref[n+1];
        pref[0]=0;
        pref[n]=nums[n-1];
        if(pref[0]==pref[n-1])return 0;
        for(int i=1;i<=j-1;i++,j--){
            pref[i]=pref[i-1]+nums[i-1];
            pref[j-1]=pref[j]+nums[j-1];
            if(pref[i]==pref[j]) return i+1;
        }
        return -1;
        */
        //try to write neat code with proper variable names**
        int n=nums.size(),sum_left = 0,sum_right = 0;
        for (int i = 0; i < nums.size(); i++)sum_right += nums[i];
        for (int i = 0; i < nums.size(); i++){
            sum_left += nums[i];
            if (sum_left == sum_right)return i;
            sum_right -= nums[i];
        }
        return -1;
    }
};