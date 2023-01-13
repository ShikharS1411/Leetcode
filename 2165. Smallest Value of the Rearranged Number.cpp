class Solution {
public:
    long long smallestNumber(long long n) {
        string s=to_string(n);
        if(n<0){
            int n=(-1)*n;
            sort(s.rbegin(),s.rend());
            string temp="-";
            temp+=s;
            return stoll(temp);
        }
        sort(s.begin(),s.end());
        if(s[0]=='0'){
            for(int i=1;i<s.size();i++){
                if(s[i]!='0'){
                    swap(s[i],s[0]);
                    break;
                }
            }
        }
        return stoll(s);
    }
};