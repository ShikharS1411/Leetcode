#define pb push_back
class Solution {
public:
    vector<int> minOperations(string s) {
        vector<int>temp,ans;
        int i=0;
        for(auto x:s){
            if(x=='1')temp.pb(i);
            i++;
        }
        //can apply brute force as per constraints
        for(int i=0;i<s.size();i++){
            int sum=0;
            for(int j=0;j<temp.size();j++){
                sum+=abs(temp[j]-i);//if same it will nullify
            }
            ans.pb(sum);
        }
        return ans;
    }
};