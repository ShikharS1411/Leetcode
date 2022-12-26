class Solution {
public:
    int myAtoi(string s) {
        /*
        //can do like this but rte idk y lol
        return stoi(s);
        */
        //formal approach
        long long ans=0;
        int i=0;
        int flag=1;
        while(s[i]==' '&&i<s.size()){
            i++;
        }    
        if(s[i]=='+'||s[i]=='-'){
            flag= s[i]=='-'?-1:1;
            i++;
        }    
        while(s[i]>='0'&&s[i]<='9'&&i<s.size()){
            ans=10*ans+(s[i]-'0');
            if(flag*ans>=INT_MAX)  return INT_MAX;
            if(flag*ans<=INT_MIN)  return INT_MIN;
            i++;
        }
        return ans*flag;  
    }
};