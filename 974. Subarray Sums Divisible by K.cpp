class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //brute force wont work o(n2)->10^8
        /*
        //cant proceed like this as dont know wheater the right side element are +ve or -ve ,so need to do with prefix sum 
        int i=0,sum=0,count=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            if(sum%k==0)count++;
            else if()
        }
        */
        //better go with prefix as itwill already compute the sum for each element
        //as whose sum%k==0
        //pref sum array se wo elemt ka sum nikale(for a subarry) (S-s)%k=0->
        //=S%k=s%k i.e S=s to be a good subarray;
        unordered_map<int,int>m;
        m[0]=1;
        int sum=0;
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0)
                rem+=k;//for -ve no -2%5=5-2=3
            if(m.find(rem)!=m.end())
            {
                result+=m[rem];
            }
            m[rem]++;
            
        }
        return result;
    }
};