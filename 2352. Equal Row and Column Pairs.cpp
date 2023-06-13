#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int equalPairs(vector<vector<int>>& a) {
        //can apply brute force tho :/
        map<vector<int>,int>row,col;
        for(int i=0;i<a.size();i++)row[a[i]]++;
        for(int i=0;i<a.size();i++){
            vector<int>temp;
            for(int j=0;j<a.size();j++)temp.pb(a[j][i]);
            col[temp]++;
        }
        int count=0;
        for(auto x:row){
            vector<int>temp=x.fi;//always do like this no direct comp huehue
            if(col.find(temp)!=col.end())count+=x.se*col[temp];//as multiple same can occure
        }
        return count;
    }
};