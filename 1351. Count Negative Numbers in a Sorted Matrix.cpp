class Solution {
public:
    int countNegatives(vector<vector<int>>& a) {
        //o(n^2)sol
        /*
        int count=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                if(a[i][j]<0)count++;
            }
        }
        return count;
        */
        //BS
        int m=a.size(),n=a[0].size();
        int i=m-1,j=0;
        int count=0;
        while(i>=0 && j<n){
            if(a[i][j]<0){
               count+=(n-1-j+1);
               i--;
            }
            else j++;
        }
        return count;
    }
};