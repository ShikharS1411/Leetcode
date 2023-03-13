class Solution {
public:
    int sumBase(int n, int k) {
        /*
        int div=n/k,rem=n%k;
        // int x=div+rem;
        // return x;
        cout<<div<<" "<<rem<<endl;
        string s=to_string(div),t=to_string(rem);
        string ans=s+t;
        int sum=0;
        for(auto x:ans)sum+=x-'0';
        return sum;
        */
        int sum=0;
        while(n){
            sum+=n%k;//5%6=5
            n=n/k;
        }
        return sum;
    }
};