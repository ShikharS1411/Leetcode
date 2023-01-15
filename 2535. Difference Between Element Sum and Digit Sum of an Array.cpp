class Solution {
public:
    int differenceOfSum(vector<int>& a) {
        int e=0,d=0;
        for(auto x:a)e+=x;
        for(int i=0;i<a.size();i++){
            string temp=to_string(a[i]);
            for(int j=0;j<temp.size();j++)d+=(temp[j]-'0');
        }
        int ans=abs(e-d);
        return ans;
    }
};