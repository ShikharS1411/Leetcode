class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& a) {
        /*
        //not working bruh
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=n-1;i>=0;i--){
            int x=a[i]/2;
            cout<<x<<" ";
            int ind=lower_bound(a.begin(),a.end(),x)-a.begin();
            // cout<<a[ind]<<endl;
            cout<<ind<<endl;
            // if(ind>=n)break;
            if(a[ind]==-1 || ind>=n)continue;
            int y=a[ind];
            if(y*2<=a[i]){
                a[ind]=-1;
                a[i]=-1;
            }
        }
        cout<<endl;
        // cout<<endl;
        int count=0;
        for(auto x:a){
            if(x==-1)count++;
        }
        return count;
        */
        sort(a.begin(),a.end());
        int count=0,n=a.size()/2;
        int i=0,j=n;
        while(i<n && j<a.size()){
            if(a[i]*2<=a[j]){
                    i++;
                    count+=2;
                }
                j++;
        }
        return count;
    }
};