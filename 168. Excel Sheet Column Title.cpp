class Solution {
public:
    string convertToTitle(int n) {
        /*
        //wrong approach
        string s=" ABCDEFGHIJKLMNOPQRSTUVWXYZ",temp="";
        while(n){
            int x=n%26;
            if(x==0){
                temp+='Z';
                break;
            }
            else temp+=s[x];//as 1 based indexing
            n=n/26;
        }
        reverse(temp.begin(),temp.end());
        return temp;
        */
        string s= "ABCDEFGHIJKLMNOPQRSTUVWXYZ",temp="";
        while(n>0){
            n=n-1;//as 1 based indexing,hr baar sub hoga % / krne ke baad
            int x=n%26;
            temp+=s[x];
            n=n/26;
        }
        
        reverse(temp.begin(), temp.end());
        return temp;
    }
};