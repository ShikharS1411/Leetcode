#define pb push_back
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //sliding window approach
        sort(p.begin(),p.end());
        int n=p.size();
        int sz=s.size();
        int i=0,j=n;
        string temp="";
        vector<int>ans;
        for(int k=0;k<j;k++)temp+=s[k];
        while(j<=sz){
            cout<<temp<<endl;
            string t=temp;
            sort(t.begin(),t.end());
            if(t==p)ans.pb(i);
            temp+=s[j];
            temp.erase(0,1);
            i++,j++;
        }
        return ans;
    }
};