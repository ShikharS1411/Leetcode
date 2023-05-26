class Solution {
public:
    static bool comp(vector<int>&v1,vector<int>&v2){
		if(v1[1]<v2[1])return true;
        return false;
    }
    
    int findLongestChain(vector<vector<int>>& a) {
        sort(a.begin(),a.end(),comp);
        int count=1;
        int x=0;
        for(int i=1;i<a.size();i++){  
            if(a[i][0]>a[x][1]){
                count++;
                x=i;
            }
        }	
        return count;
    }
};