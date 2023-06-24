class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if(a.size()==0)return 0;
        if(a.size()==1)return 1;
        sort(a.begin(),a.end());
        int count=1,maxi=1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i+1]-1==a[i]){
                count++;
                maxi=max(maxi,count);
            }
            else if(a[i]==a[i+1])continue;//no need to do break
            else count=1;
        }
        return maxi;
        //can do this with dp tho :/
    }
};