#define pb push_back
class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        int n=a.size();
        vector<string>ans;
        for(int i=0;i<n;i++){
            int temp=a[i];
            while(i+1<n && a[i+1]==a[i]+1)i++;
            string p=to_string(temp);
            string q=to_string(a[i]);
            if(temp!=a[i]){
                string res=p+"->"+q;;
                ans.pb(res);
            }
            else ans.pb(p);
        }
        return ans;
    }
};