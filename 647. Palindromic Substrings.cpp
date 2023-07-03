class Solution {
public:
    bool check(string t){
        string s=t;
        reverse(t.begin(),t.end());
        return s==t;
    }
    int countSubstrings(string s) {
        int count=0;
        //can apply brute force ig
        //this is to find all the subarray/string using two loops
        // 1->for sub strings
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                //take all the subarrays 
                //use this to find all the substrings,dont use s.substr(i,j);coz thats wrong :/
                string t=s.substr(i,j-i+1);
                if(check(t))count++;
                // cout<<t<<endl;
            }
        }
        return count;
    }
};