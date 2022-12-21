#define pb push_back
class Solution {
public:
    int maximumProduct(vector<int>& a) {
        //edge cases
        /*
        //wrong +/- cases are not handled
        int n=nums.size(),prod=1;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=n-3;i--)prod=prod*nums[i];
        return prod;
        */
        //greedy
        int n=a.size();
        sort(a.begin(),a.end());
        //1st 2 no -ve ho skte aur magnitude greater hoga and last wla element consider krke max ho skta otherwise last ke 3 element hi max bnyenge
        int maxi1=a[0]*a[1]*a[n-1];//1 -ve wla hoga toh wo bhi handle ho jyega
        int maxi2=a[n-1]*a[n-2]*a[n-3];
        return max(maxi1,maxi2);
    }
};