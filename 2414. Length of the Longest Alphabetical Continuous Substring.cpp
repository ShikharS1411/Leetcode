class Solution {
public:
    int longestContinuousSubstring(string s) {
        //kadane's algo type uhu?
        int maxi=0,count=1;
        s+='#';//add a garbage char,as last iteration tk shi rha toh woo consider nhi hogi as else cond mei hi nhi jyegi(as per my code)
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]+1==s[i+1])count++;
            else{
                maxi=max(maxi,count);
                count=1;
            }
        }
        return maxi;
    }
};