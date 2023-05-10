#define pb push_back
class Solution {
public:
    vector<int> lexicalOrder(int n) {
        //o(1)mei nhi kr rha krlo jo krna h ^^
        vector<string>s;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            string t=to_string(i);
            cout<<t<<" ";
            s.pb(t);
        }
        cout<<endl;
        sort(s.begin(),s.end());
        for(auto x:s)cout<<x<<" ";
        for(auto x:s)ans.pb(stoi(x));
        // return {1};
        return ans;
    }
};