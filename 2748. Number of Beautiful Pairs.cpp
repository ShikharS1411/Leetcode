class Solution {
public:
    int countBeautifulPairs(vector<int>& a) {
        int count=0;
        for(int i=0;i<a.size()-1;i++){
            string s=to_string(a[i]);
            for(int j=i+1;j<a.size();j++){
                string t=to_string(a[j]);
                int fi=s.front()-'0';
                int last=t.back()-'0';
                if(__gcd(fi,last)==1)count++;
            }
        }
        return count;
    }
};