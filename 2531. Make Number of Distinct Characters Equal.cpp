class Solution {
public:
    bool isItPossible(string s, string t) {
        /*
        map<char,int>mp1,mp2;
        for(auto x:s)mp1[x]++;
        for(auto x:t)mp2[x]++;
        if(mp1.size()==mp2.size())return true;
        if(mp1.size()>mp2.size()){
            for(auto x:s){
                if(mp2.find(x)==mp2.end() && mp1[x]>=2)return true;
            }
        }
        else {
            for(auto x:t){
                if(mp1.find(x)==mp1.end() && mp2[x]>=2)return true;
            }   
        }
        return false;
        */
        map<char,int> mp1,mp2;
        for(auto x:s)mp1[x]++;
        for(auto x:t)mp2[x]++;
        for(char ch1='a';ch1<='z';ch1++){
            for(char ch2='a';ch2<='z';ch2++){
                if(mp1[ch1]>0&&mp2[ch2]>0){
                    mp1[ch1]--;
                    mp2[ch2]--;
                    mp1[ch2]++;
                    mp2[ch1]++;
                    int unique1=0,unique2=0;
                    for(char temp='a';temp<='z';temp++){
                        if(mp1[temp]>0){
                            unique1++;
                        }
                        if(mp2[temp]>0){
                            unique2++;
                        }
                    }
                    if(unique1==unique2){
                        return true;
                    }
                    mp1[ch2]--;
                    mp2[ch1]--;
                    mp1[ch1]++;
                    mp2[ch2]++;
                }
            }
        }
        return false;
    }
};