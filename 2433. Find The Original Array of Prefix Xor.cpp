class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        //to store the original array
        int n=pref.size();
        vector<int>arr(n);
        //iterate the prefix array
        for(int i=0;i<n;i++){
            //if XOR if -1 of its then all entity will bcme 0 as a^a=0 and will left with the one element and that would be the element of the original array(of that particular index)
            if(i==0) arr[0]=pref[0];
            else arr[i]=pref[i]^pref[i-1];
        }
        return arr;
    }
};