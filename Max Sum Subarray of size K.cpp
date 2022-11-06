class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here
        int i=0,j=0;
        long sum=0,maxi=INT_MIN;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<K){
                j++;
            }
            //exact window size
            else if(j-i+1==K){
                //uss 1st window ka exact sum
                maxi=max(maxi,sum);
                sum-=Arr[i];
                j++;
                i++;
            }
        }
        return maxi;
    }
}