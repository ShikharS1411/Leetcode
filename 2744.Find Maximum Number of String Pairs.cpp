class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
        map<string,int>mp;
        int count=0;
        for(auto x:s)mp[x]++;
        for(auto x:s){
            string temp=x;
            reverse(temp.begin(),temp.end());
            if(mp[temp]>=1){
                if(temp==x && mp[temp]<=1)continue;
                count+=mp[temp];
                mp[x]=0;
                // if(mp[x]==0)mp.erase(x);
                mp[temp]--;
                // if(mp[temp]==0)mp.erase(temp);
            }
        }
        return count;
    }
};