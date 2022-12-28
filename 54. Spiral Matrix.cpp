#define pb push_back
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        //using 4 pointer approach
        int top=0,bottom=m-1,left=0,right=n-1;
        vector<int>ans;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++) ans.pb(matrix[top][i]);
            top++;
            for(int i=top;i<=bottom;i++)ans.pb(matrix[i][right]);
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--)ans.pb(matrix[bottom][i]);
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)ans.pb(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};