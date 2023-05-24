class Solution {
public:
    int bestClosingTime(string s) {
        int penalty=0;
        //when closed at 0th hr
        for(auto x:s){
            if(x=='Y')penalty++;
        }
        int curr=penalty,mini=0;
        //as only consists of Y & N
        for(int i=1;i<=s.size();i++){
            if(s[i-1]=='Y')curr--;
            else curr++;//as N aya hoga aur open hogi toh penalty badh jyegi 1 se
            if(curr<penalty){//ki iss ith value pr close krne se agr curr dec hoti then it can be suitable ans
                penalty=curr;
                mini=i;
            }
        }
        return mini;
    }
};