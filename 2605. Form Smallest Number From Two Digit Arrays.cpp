class Solution {
public:
    int minNumber(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        unordered_map<int,int>umap;
        for(auto x:b)umap[x]++;
        for(auto x:a){
            if(umap.find(x)!=umap.end()){
                return x;
            }
        }
        string s="";
        s+=a[0]+'0';
        s+=b[0]+'0';
        sort(s.begin(),s.end());
        return stoi(s);
    }
};