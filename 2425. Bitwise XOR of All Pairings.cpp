class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        /*
        //brute force approach
        vector<int>nums3;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++)nums3.push_back(nums1[i]^nums2[j]);
        }
        int ans=0;
        for(auto x:nums3)ans^=x;
        return ans;
        */
        
        //more optimal appraoch
        //as XOR holds associative property that means, a ^( b ^ c ) = ( a ^ b )^ c = ( a ^ c )^ b .
        //if both array size would be even then all element would exists twice ->eventually result XOR would be zero
        //similarly if odd then respective times it will apprear
        //here,nothing to do with pairing as XOR has associative property
        //as per hint

        int m=nums1.size(),n=nums2.size(),res=0;
        for(auto x:nums1){
            //of nums2 as count depends on nums2 size
            if(n%2) res^=x;
            //else res=0 as when n%2==0 i.e our even case but alreay defined res=0 so no need
        }
        //just to avoid 0(n2)
        for(auto x:nums2){
            //of nums1 as count depends on nums1 size
            if(m%2) res^=x;
        }
        return res;
    }
};