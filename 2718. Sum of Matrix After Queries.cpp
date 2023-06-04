#define ll long long int
/*
class Solution {
public:
    void getrow(int type,int index,int val,vector<vector<int>>&a){
        int n=a.size();
        for(int j=0;j<n;j++)a[index][j]=val;
    }
    void getcol(int type,int index,int val,vector<vector<int>>&a){
        int n=a.size();
        for(int j=0;j<n;j++)a[j][index]=val;
    }
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        //brute force ho jyegi be :/
        //ya giving tle :P
        vector<vector<int>>a(n,vector<int>(n,0));
        for(int i=0;i<q.size();i++){
            int type=q[i][0];
            int index=q[i][1];
            int val=q[i][2];
            if(type==0){
                getrow(type,index,val,a);
            }
            else getcol(type,index,val,a);
        }
        ll sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)sum+=a[i][j];
        }
        return sum;
    }
};
*/
class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        set<int>st1,st2;
        int row=n,col=n;
        ll sum=0;
        for(int i=q.size()-1;i>=0;i--){
            int type=q[i][0];
            int index=q[i][1];
            int val=q[i][2];
            // row
            if(type==0){
                if(st1.find(index)==st1.end()){
                    sum+=val*row;
                    col--;
                    st1.insert(index);
                }
            }
            else{
                if(st2.find(index)==st2.end()){
                    sum+=val*col;
                    row--;
                    st2.insert(index);
                }
            }
        }
        return sum;
    }
};