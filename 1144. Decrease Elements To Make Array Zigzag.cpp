class Solution {
public:
    int movesToMakeZigzag(vector<int>& a) {
        int n=a.size();
        if(n==1)return 0;
        int sum1=0,sum2=0;
        //greedy approach basic iterations
        for(int i=0;i<n;i+=2){
            //edge case
            if(i==0){
                if(a[i]>=a[i+1])sum1+=a[i]-a[i+1]+1;
            }
            //edge case
            else if(i==n-1){
                if(a[i]>=a[i-1])sum1+=a[i]-a[i-1]+1;
            }
            else{
                if(a[i]>=a[i-1]||a[i]>=a[i+1])sum1+=a[i]-min(a[i-1],a[i+1])+1;
            }
        }
        for(int i=1;i<n;i+=2){
            if(i==n-1){
                if(a[i]>=a[i-1])sum2+=a[i]-a[i-1]+1;
            }
            else{
                if(a[i]>=a[i-1]||a[i]>=a[i+1])sum2+=a[i]-min(a[i-1],a[i+1])+1;
            }
        }
        return min(sum1,sum2);
    }
};