class Solution {
public:
    int averageValue(vector<int>& nums) {
        /*
        vector<int>ans;
        int sum=0;
        //edge case
        if(!nums.size())return 0;
        for(auto x:nums)
            if(!x%2&&!x%3)ans.push_back(x);
        int n=ans.size();
        //edge case
        if(!n)return 0;
        if(n){
            for(auto x:ans)sum+=x;
        } 
        int x=sum/n;
        return x;
        */
        int count=0,sum=0;
        //edge case
        if(nums.size()==0)return 0;
        for(auto x:nums){
            if(x%2==0 && x%3==0){
                    count++;
                    sum+=x;
            }
        }
        // edge case
        if(count==0)return 0;
        return sum/count;
    }
};