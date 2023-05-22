class Solution{
    vector<string> ans;
    void recursion(int i, int j, string path, vector<vector<int>> &matrix, int row, int column)
    {
        if(i < 0 or i >= row or j < 0 or j >= column) //checking out of bound conditions 
        {
            return;
        }
        if(matrix[i][j] == 0) //this is to avoide the recursive call on blocked or viditedd numbers
        {
            return;
        }
        
        if(i == row-1 and j == column-1 ) //this is for answer making
        {
            ans.push_back(path);
        }
        
        matrix[i][j] = 0;
        
        //up
        recursion(i-1,j,path+'U',matrix,row,column);
        //down
        recursion(i+1,j,path+'D',matrix,row,column);
        //left
        recursion(i,j-1,path+'L',matrix,row,column);
        //right
        recursion(i,j+1,path+'R',matrix,row,column);
        
        matrix[i][j] = 1;
        return;
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        string path;
        int visited = m[0][0];
        recursion(0,0,path,m,n,n);
        return ans;
    }
};