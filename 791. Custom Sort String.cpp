class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        string temp="";
        for(auto x:s)mp[x]++;
        for(auto x:order){
            if(mp.find(x)!=mp.end()){
                // order.append(x.second,x.first)
                //keep adding till all its freq not bcme 0
                while(mp[x]--)temp+=x;//we can add a char in a string (continuation)like this
                mp.erase(x);
            }
        }
        //now add rest of the elements from the map into temp;
        for(auto x:mp){
            while(x.second--)temp+=x.first;
        }
        return temp;
    }
};