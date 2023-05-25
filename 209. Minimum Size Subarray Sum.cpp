class Solution {
public:
    int minSubArrayLen(int k, vector<int>& a) {
        int sum=0,mini=1e9;
        for(auto x:a)sum+=x;
        if(sum<k)return 0;
        sum=0;
        for(int i=0,j=0;j<a.size();j++){
            sum+=a[j];
            while(sum>=k){
                mini=min(mini,j-i+1);
                sum-=a[i];
                i++;
            }
        }
        return mini;
    }
};