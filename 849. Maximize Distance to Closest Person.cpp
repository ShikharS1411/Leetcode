/*
#define pb push_back
class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        
        //ho toh jna chye tha bc -_-
        vector<int>a;
        int maxi=-1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==1)a.pb(i);
        }
        if(a.size()==1){
            int x=a[0],y=(n-1)-a[0];
            maxi=max(x,y);    
        }
        int e=a.size();
        if(a.size()>1 && a[0]==0 && s[n-1]!=0){
            //take diff of every cons index in and max it then take avg
            for(int i=0;i<e-1;i++){
                maxi=max(maxi,(abs(a[i]-a[i+1]))/2);
            }
        }
        else {
            maxi=max(maxi,a[0]);
            int z=n-1-a[e-1];
            maxi=max(maxi,z);
            
        }
        return maxi;
        
    }
};
*/
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        vector<int> vec;
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                vec.push_back(i+1);
            }
        }
        if(vec.size()==1){
            return max(vec[0]-1,n-vec[0]);
        }
        int maxi=INT_MIN;
        for(int i=1;i<vec.size();i++){
            for(int j=vec[i-1]+1;j<vec[i];j++){
                int r=min(j-vec[i-1],vec[i]-j);
                maxi=max(maxi,r);
            }
        }
        maxi=max(vec[0]-1,maxi);
        maxi=max(maxi,n-vec[vec.size()-1]);
        return maxi;
    }
};