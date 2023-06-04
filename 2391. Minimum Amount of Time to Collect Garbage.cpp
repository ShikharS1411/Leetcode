#define pb push_back
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& t) {
        int g=0,m=0,p=0;
        int pick_time=0;
        for(int i=0;i<garbage.size();i++){
            pick_time+=garbage[i].size();
            for(auto ch:garbage[i]){
                if(ch=='P') p=i;
                else if(ch=='G') g=i;
                else m=i;
            }
        }
        vector<int>pref;
        int psum=0;
        for(auto x:t){
            psum+=x;
            pref.pb(psum);
        }
        int travel_time=0;
        if(g>0)travel_time+=pref[g-1];
        if(m>0)travel_time+=pref[m-1];
        if(p>0)travel_time+=pref[p-1];
        return travel_time+pick_time;
    }
};