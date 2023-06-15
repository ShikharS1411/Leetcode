#define ll long long int
class Solution {
public:
    int chalkReplacer(vector<int>& a, int k) {
        /*
        //it will give tle :P
        int i=0,n=a.size();
        while(true){
            i=i%n;
            if(a[i]>k)return i;
            k-=a[i];
            i++;
        }
        return -1;
        */
        int n=a.size();
        ll sum=0;
        for(auto x:a)sum+=x;
        int rem=((ll)k)%sum;
        if(rem==0)return 0;
        for(int i=0;i<n;i++){
            if(rem<a[i])return i;
            else rem-=a[i];
        }
        return -1;
    }
};