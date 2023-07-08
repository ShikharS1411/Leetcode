#define pb push_back
class Solution {
public:
    bool check(vector<int>&temp){
        for(int i=1;i<temp.size();i++){
            int diff=temp[i]-temp[i-1];
            if(i&1){
                if(diff!=1)return false;
            }
            else if(diff!=-1)return false;
        }
        return true;
    }
    int alternatingSubarray(vector<int>& a) {
        int maxi=-1;
        for(int i=0;i<a.size()-1;i++){
            for(int j=i+1;j<a.size();j++){
                vector<int>temp;
                for(int k=i;k<=j;k++){
                    // cout<<a[k]<<" ";
                    temp.pb(a[k]);
                }
                int sz=temp.size();
                if(check(temp))maxi=max(maxi,sz);
            }
        }
        return maxi;
    }
};