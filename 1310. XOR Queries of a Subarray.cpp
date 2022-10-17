class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        //range based query/prefix sum approach
        //o(1) tc
        
        //create a prefix XOR array of the same size that of given array
        int n=arr.size(),pref[n];
        pref[0]=arr[0];
        for(int i=1;i<n;i++) pref[i]=pref[i-1]^arr[i];
        //now deal with these range based queries(whose xor till whom is asked|L,R)
        //as prev array hold XOR till that element
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            int L=queries[i][0];//ith row and 1st col which holds value zero
            int R=queries[i][1];//ith row and 1st col which holds value one
            if(L==0) ans.push_back(pref[R]);
            else ans.push_back(pref[R]^pref[L-1]);
        }
        return ans;
    }
};