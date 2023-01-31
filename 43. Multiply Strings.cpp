#define ll  long long int
class Solution {
public:
    string multiply(string n1, string n2) {
        /*
        //RTE due to long long overflow -_-
        ll ans=stoll(n1)*stoll(n2);
        return to_string(ans);
        */
        //iterative approach
        //edge case
        if(n1=="0" || n2=="0") return "0";
        vector<int>a(n1.size()+n2.size(),0);
        for(int i=n1.size()-1;i>=0;i--){
            for(int j=n2.size()-1;j>=0;j--){
                a[i+j+1]+=(n1[i]-'0')*(n2[j]-'0');
                a[i+j]+=a[i+j+1]/10;
                a[i+j+1]%=10;
            }
        }
        string ans="";
        int i=0;
        while(a[i]==0)i++;
        while(i<a.size()){
            ans+=to_string(a[i]);
            i++;
        }
        return ans;
    }
};