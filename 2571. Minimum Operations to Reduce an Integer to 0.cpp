class Solution {
public:
    int minOperations(int n) {
        int count=0;
        /*
        //will give TLE 
        int x=log2(n),count=0;
        cout<<x<<endl;
        vector<int>a(x+1);
        for(int i=0;i<x+1;i++)a[i]=pow(2,i);
        for(auto x:a)cout<<x<<" ";
        cout<<endl;
        int mini=1e9;
        while(n){
            for(auto x:a)mini=min(mini,abs(x-n));
            n=mini;
            count++;
        }
        return count;
        */
        while(n){
            int x=log2(n);
            cout<<x<<endl;
            int a=pow(2,x),b=pow(2,x+1);
            int mini=min(abs(n-a),abs(n-b));
            n=mini;
            count++;
        }
        return count;
    }
};