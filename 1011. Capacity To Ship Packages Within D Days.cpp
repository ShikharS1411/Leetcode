class Solution {
public:  
    bool check(int mid,vector<int>&a,int d){
        int n=a.size(),days=1,total=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(a[i]>mid) flag=false;
            if(total+a[i]<=mid)total+=a[i];
            else{
                days++;
                total=a[i];
            }
        }
        if(!flag)return false;
        else return (days<=d);
    }
    int shipWithinDays(vector<int>&a,int d) {
        int l=1;
        int sum=0;
        for(auto x:a)sum+=x;
        int r=sum;
        while(l<r){
            int mid=(l+r)/2;
            if(check(mid,a,d))r=mid;
            else l=mid+1;
        }
        return l;
    }
};