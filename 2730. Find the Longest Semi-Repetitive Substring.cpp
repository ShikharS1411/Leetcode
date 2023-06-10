class Solution {
public:
    bool check(string t){
        // bool flag=true;
        int count=0;
        for(int i=0;i<t.size()-1;i++){
            if(t[i]==t[i+1]){
                count++;
            }
        }
        if(count>1)return false;
        return true;
    }
    int longestSemiRepetitiveSubstring(string s) {
        //can apply brute force huehue
        if(s.size()<=2)return s.size();
        int maxi=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                //take all the subarrays and check
                string t=s.substr(i,j-i+1);
                // cout<<t<<endl;
                if(check(t))maxi=max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};