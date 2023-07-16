#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int minimumIndex(vector<int>& a) {
        int n=a.size();
        map<int,int>mp;
        for(auto x:a)mp[x]++;
        int elem=-1,freq=0;
        for(auto x:mp){
            if(x.se*2>n){
                elem=x.fi;//as can be atmost 1 dumbo
                freq=x.se;
            }
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==elem){
                count++;freq--;
                //now check part for it
                if(count*2>i+1 && freq*2>n-1-i)return i;
            }
        }
        return -1;
    }
};