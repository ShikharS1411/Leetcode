class Solution {
public:
    int findPeakElement(vector<int>& a) {
        // return *max_element(a.begin(),a.end());
        /*
        //o(n)approach
        int n=a.size(),i=0;
        while(a[i]<a[i+1] && i<n-1){
            if(a[i+1]==a[n-1])return -1;
            i++;
        }
        return i;
        */
        // o(logn) i.e by using binary search
        int n=a.size(),l=0,h=n-1;
        if(n==1)return 0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid>0 && mid<n-1){
                if(a[mid]>a[mid+1] && a[mid]>a[mid-1])return mid;//ab toh yhih 
                else if(a[mid]>a[mid+1])h=mid-1;
                else l=mid+1;//a[mid]>a[mid-1]
            }
            else if(mid==0){
                if(a[0]>a[1])return 0;
                else return 1;
            }
            else if(mid==n-1){
                if(a[mid]>a[mid-1])return n-1;
                else return n-2;
            }
        }        
        return -1;
    }
};