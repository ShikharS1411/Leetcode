class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        /* bruh useless approach
        //triangle exists when any two sides must have sum>other side
        //if just 3 elements in array then simply prove it is a triangle and if it is then return the sum of sides else return 0
        sort(nums.begin(),nums.end());
        int size=nums.size();
        //edge case
        if(size<3) return 0;
        if(size==3){
            int sum=nums[0]+nums[1]+nums[2];
            if(nums[0]+nums[1]>nums[2]) return sum;//no need to check max 
            return 0;
        }
        //when size>3
        //using two pointer approach just like 3 sum
        int maxi=INT_MIN,count=0;
        for(int i=0;i<size-1;i++){
            int j=i+1,k=size-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                //condition to be a triangle,as already sorted
                if(nums[i]+nums[j]>nums[k]){
                    count++;
                    maxi=max(maxi,sum);
                    j++,k--;
                }
                else if(nums[i]+nums[j]<nums[k])k--;
                //else when equal
                else j++;                
            }
            //but after doing all of this ,still not able to get a condition for a triangle i.e. count remains 0 then:
            if(count==0) return 0;
        }
        return maxi;
        */
        //similar to sliding window approach
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--){
            int sum=nums[i-1]+nums[i-2]+nums[i];
            if(nums[i-1]+nums[i-2]>nums[i]) return sum;
        }
        return 0;
    }
};