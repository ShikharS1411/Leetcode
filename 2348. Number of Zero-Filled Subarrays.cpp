#define ll long long int
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& a) {
        //filled->completely filled with zeroes
        //kind of sw approach hehe
        ll count=0;
        int n=a.size(),i=0;
        while(i<n){
            if(a[i]==0){
                ll sz=1;
                int j=i+1;
                while(j<n){
                    if(a[j]==0){
                        sz++;
                        j++;
                    }
                    else break;
                }
                count+=(sz*(sz+1))/2;
                i=j;
            }
            else i++;
        }
        return count;
    }
};