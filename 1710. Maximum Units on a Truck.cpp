#define pb push_back
#define MP make_pair
#define fi first
#define se second
class Solution {
public:
    /*
    static bool comp1(pair<int,int>a,pair<int,int> b){
        if(a.se<b.se)return false;
        return true;
    }
    static bool comp2(pair<int,int>a,pair<int,int> b){
        if(a.se==b.se){
            if(a.fi<b.fi)return false;
        }
        return true;
    }
    */
    int maximumUnits(vector<vector<int>>& a, int k) {
        vector<pair<int,int>>pp;
        // for(auto x:a)pp.pb(MP(x.first,x.second))
        for(int i=0;i<a.size();i++)pp.pb(MP(a[i][1],a[i][0]));
        //sort acc to units 
        sort(pp.rbegin(),pp.rend());
        // sort(pp.begin(),pp.end(),comp2);
        // for(auto x:pp)cout<<x.fi<<" "<<x.se<<"  ";
        // cout<<endl;
        int no_box=0,count=0;
        for(auto x:pp){
            no_box+=x.se;//se no of boxes
            if(no_box>k){
                //check
                no_box-=x.se;
                // cout<<no_box<<endl;
                int q=k-no_box;
                count+=q*x.fi;
                break;
            }
            count+=(x.se*x.fi);
        }
        // cout<<no_box<<endl;
        return count;
    }
};