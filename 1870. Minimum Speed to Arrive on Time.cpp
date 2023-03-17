class Solution {
public:
    bool check(int mid,vector<int>&a,double h){
        //mid->selected speed
        double total_h=0;
        for(int i=0;i<a.size();i++){
            //cond acc to q,if in double then need to wait
            if(total_h>(int)total_h)total_h=(double)((int)total_h+1);
            total_h+=((double)a[i]/(double)mid);
        }
        if(total_h>h)return false;
        return true;
    }
    int minSpeedOnTime(vector<int>& a, double h) {
        //as need to set penalty/parameter->use BS
        //need to minimise mid(mid->selected value)
        int l=1,r=1e7;//min and max speed possible(as per constraints range)
        int ans=-1;
        while(l<=r){
            int mid=(l+r)>>1;
            if(check(mid,a,h)){
                ans=mid;
                //as need to minimze 
                r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};