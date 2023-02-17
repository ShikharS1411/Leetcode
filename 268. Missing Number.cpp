class Solution {
public:
    int missingNumber(vector<int>& a) {
        sort(a.begin(),a.end());
        // bool check=true;
        int i=0;
        for(auto x:a){
            if(x!=i)return i;
            i++;
        }
        return i;
    }
};