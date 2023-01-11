class Solution {
public:
    int longestSubarray(vector<int>& a) {
        //as per constraints cant apply brute force
        //just need to find the count of max element
        int maxi=*max_element(a.begin(),a.end());
        int count=0,ans=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==maxi)count++;//just count till equal else make it 0 for further fresh use
            else count=0;
            ans=max(ans,count);
        }
        return ans;
    }
};