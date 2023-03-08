#define ll long long int
class Solution {
public:
    bool check(int mid,vector<int>&a,int h){
        ll total_time=0;//as range of h is upto 1e9 and there's possiblity that total_time may exceed due to taken mid value
        for(int i=0;i<a.size();i++){
            int x=a[i]/mid;
            total_time+=x;
            int y=a[i]%mid;//bche hue if not completely div
            if(y>0)total_time++;//ek badha do coz ussi pile ko khtm krne mei 1hr extra lg jyega
        }
        //if from this mid value,total_time exceeds h then it("mid") is not a possible and
        if(total_time>h)return false;
        return true;//can be a valid one
    }
    int minEatingSpeed(vector<int>&a, int h) {
        //need to set a penalty->use BS
        //same as of capacity q
        int l=1;//jb 1 hr mei sirf 1 hi banana khana ho
        int r=1e9;//worst case as per range jb h hr mei max 1e9 banana ka pile khana ho  
        int ans=0;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid,a,h)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};
