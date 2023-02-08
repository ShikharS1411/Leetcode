#define pb push_back
class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int k) {
        vector<int>temp;
        for(int i=0;i<c.size();i++)temp.pb(c[i]-r[i]);
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0)continue;
            if(k>=temp[i]){
                k-=temp[i];
                temp[i]=0;
            }
            if(k==0)break;
        }
        int count=0;
        for(auto x:temp){
            if(x==0)count++;
        }
        return count;
    }
};