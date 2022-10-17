class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        //as for every element till n
        for(int i=0;i<=n;i++){
            //calculate the no.of setbits in each element till n
            int count=0;
            int nums=i;
            while(nums){
                count++;
                nums=nums&(nums-1);
            }
            ans.push_back(count);
        }
        return ans;
    }
};