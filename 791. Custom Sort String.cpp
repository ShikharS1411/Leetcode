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
                int freq[26]={0};
        /*
        //instead of storing of s store freq that of order elements
        for(auto x:s){
            freq[x-'a']++;
        }
        string temp="";
        for(auto x:order){
            //that means the element is present in the freq array which is made of string s
            if(freq[x-'a']!=0){
                while(freq[x-'a']--)temp+=x;
                freq[x-'a']=0;
            }
        }
        
        //this is worng freq ko char mei convert kr rhe 
        for(auto x:freq){
            if(x!=0)temp+=(char)(x+'a');
        }
        */
        string s1, s2;
        for(auto x: order) freq[x-'a']++;
        for(auto x: s){
            if(freq[x-'a']==0) s2+=x;
            else freq[x-'a']++;
        }
        for(auto x: order){
            while(freq[x-'a']>1){
                s1+=x; 
                freq[x-'a']--;
            } 
        }
        return s1+s2;
    }
};