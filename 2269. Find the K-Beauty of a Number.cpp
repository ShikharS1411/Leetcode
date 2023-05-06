class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int n=s.size();
        int i=0,count=0;
        for(int j=0;j<n;j++){
            if(j-i+1==k){
                //check
                int x=stoi(s.substr(i,j-i+1));
                cout<<x<<" ";
                if( x>0 && num%x==0)count++;
                i++;
            }
        }
        return count;
    }
};