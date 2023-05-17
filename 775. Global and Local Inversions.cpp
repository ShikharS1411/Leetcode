class Solution {
public:
    bool isIdealPermutation(vector<int>& a) {
        for(int i=0;i<a.size();i++){
            if(a[i]-i>1 || a[i]-i<-1)return false;
        }
        return true;
    }
};