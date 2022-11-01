class Solution {
public:
    int countHomogenous(string s) {
        /*
        //brute force->will give tle
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(s[i]==s[j])count++;
                else break;
            }
        }
        return count;
        */
        //optimal appraoch
        int mod=1e9+7,count=1,ans=1;
        //as homogenous so can treat it as sorted(for a particular element)
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])count++;
            else count=1;//as hr element ka 1 count toh already rhega hi
            ans=(ans+count)%mod;//value will remains the same unitll >=mod
        }
        return ans%mod;
                // https://youtu.be/1nATf3_viTI
        //same but better way
        const int mod=1e9+7;
        int ans=s.size();//as ek baar toh ayega hi
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                ans=(ans+count)%mod;
                count++;
            }
            else count=1;
        }
        return ans%mod;
    }
};
