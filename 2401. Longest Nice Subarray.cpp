class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        //to find longest size->max size subarray
        //1st brute force->cant apply as per constraints n*n>10^5
        //2nd optimised approach->using sliding windows(as size related)
        int i=0,j=0,And=0,maxi=1,n=nums.size();
        while(j<n){
            while(i<=j && (And&nums[j])!=0){
                And^=nums[i];
                i++;
            }
            maxi=max(maxi,j-i+1);
            And|=nums[j];
            j++;
        }
        return maxi;
    }
};