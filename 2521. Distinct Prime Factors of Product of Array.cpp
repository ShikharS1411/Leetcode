class Solution {
public:
    int distinctPrimeFactors(vector<int>& a) {
        // set<int>st;
        map<int,int>mp;
        for(auto x:a){
            //get all the primes ez
            // set<int>st;
            for(int i=2;i<=x;i++){
                if(x%i==0){
                    while(x%i==0)x/=i;
                    cout<<i<<" ";
                    // st.insert(i);
                    mp[i]++;
                }
            }
            cout<<endl;
        }
        return mp.size();
    }
};