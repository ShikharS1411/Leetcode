class Solution {
public:
    int minOperations(vector<int>& a) {
        //obv based 
        //edge case
        int n=a.size(),g=0;
        for(auto x:a)g=__gcd(g,x);
        cout<<g<<endl;
        if(g!=1)return -1;
        //now perform operation,can apply brute force tho hehe
        int mini=1e9;
        int cnt=count(a.begin(),a.end(),1);
        for(int i=0;i<n;i++){
            int cntr=0;
            g=a[i];
            for(int j=i+1;j<n;j++){
                g=__gcd(g,a[j]);
                cntr++;
                if(g==1){
                    mini=min(mini,cntr);
                    break;
                }
            }
        }
        return mini+n-cnt-1;
    }
};