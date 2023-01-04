class Solution {
    void helper(int x,set<int>&st){
        for(int i=2;i*i<=x;i++){
            while(x%i==0){
                st.insert(i);
                x=x/i;
            }
        }
        //only prime factor left
        if(x>1)st.insert(x);
    }
public:
    int distinctPrimeFactors(vector<int>& a) {
        set<int>st;
        for(auto x:a)helper(x,st);
        return st.size();
    }
};