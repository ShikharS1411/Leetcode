class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size();
        int pref=0,count=0;
        map<int,int>mp;
        //for 0 val of pref when ==k
        mp[pref]++;
        for(int i=0;i<n;i++){
            pref+=a[i];
            int need=pref-k;
            count+=mp[need];
            mp[pref]++;
        }
        return count;
    }
};