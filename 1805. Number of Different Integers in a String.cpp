#define ll long long int
class Solution {
public:
    int numDifferentIntegers(string s) {
        /*
        //rte -_-
        set<ll>st;
        ll n=s.size();
        for(ll i=0;i<n;i++){
            if((s[i]-'0')<=9){
                string temp="";
                while((s[i]-'0')<=9){
                    temp+=s[i];
                    if(i<n)i++;
                    else break;
                }
                st.insert(stoll(temp));
            }
        }
        return st.size();
        */
        int n = s.length();
        unordered_set<string>st;
        int i=0;
        while(i<n){
            if(isdigit(s[i]) == false){
                i++;
                continue;
            }
            string temp = "";
            while(i<n && isdigit(s[i])){
                temp+=s[i];
                i++;
            }
            int j=0;
            while(j<temp.length() && temp[j] == '0') j++;
            temp = temp.substr(j);
            st.insert(temp);
        }
        return st.size();
    }
};