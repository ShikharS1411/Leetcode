class Solution {
public:
    int closetTarget(vector<string>& s, string target, int si) {
        vector<int>a;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==target)a.push_back(i);
        }
        if(a.size()==0)return -1;
        int mini=1e9;
        for(int i=0;i<a.size();i++){
            mini=min(mini,abs(a[i]-si));
            mini=min(mini,n-abs(a[i]-si));
        }
        return mini;
    }
};