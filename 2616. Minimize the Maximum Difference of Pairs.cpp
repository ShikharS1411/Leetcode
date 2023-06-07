class Solution {
public:
    bool check(int mid,int p,vector<int>&a){
        //jo constraint pass kiya jta h here p usko compare krte h tbh buddy :/
        //value mid is just a check for that constraint 
        int n=a.size(),count=0;
        for(int i=0;i<n;){
            if(i+1<n && a[i+1]-a[i]<=mid){
                count++;
                i+=2;
            }
            else i++;
        }
        if(count>=p)return true;
        return false;
    }
    int minimizeMax(vector<int>& a, int p) {
        //BS
        //minimise the ans i.e. mid
        sort(a.begin(),a.end());
        int l=0,r=a.back()-a.front(),ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,p,a)){
                //as need to minimise
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};