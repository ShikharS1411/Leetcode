class Solution {
public:
    int minimumRounds(vector<int>& a) {
        map<int,int>mp;
        for(auto x:a)mp[x]++;
        int count=0;
        for(auto x:mp){
            int temp=x.second;
            if(temp==1){
                return -1;
            }
            if(temp%3==0)count+=temp/3;
            else count+=(temp/3)+1;
        }
        return count;
    }
};