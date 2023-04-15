#define pb push_back
#define fi first
#define se second
class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& q, vector<string>& w) {
        //as per constraints can apply brute force
        //hashmaps ig
        map<int,int>mp;
        int i=1;
        for(auto x:w){
            char ch=*min_element(x.begin(),x.end());
            int cnt=count(x.begin(),x.end(),ch);
            mp[i++]=cnt;//uniquely identify it ez hehe
        }
        for(auto x:mp)cout<<x.fi<<" "<<x.se<<"  ";
        cout<<endl;
        // return {1};
        vector<int>ans;
        for(auto x:q){
            int cntr=0;
            char ch=*min_element(x.begin(),x.end());
            int cnt=count(x.begin(),x.end(),ch);
            for(auto it:mp){
                if(it.se>cnt)cntr++;
            }
            ans.pb(cntr);
        }
        return ans;
    }
};