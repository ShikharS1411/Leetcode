class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        //cond of straight line->y=mx+c
        //thus for all values y/x==m should hold ez
        //just like used to prove in 11th take and random x,y and check
        //dont use divide as 0 will give rte :/
        int x0=a[0][0],x1=a[1][0];
        int y0=a[0][1],y1=a[1][1];
        for(int i=2;i<a.size();i++){
            int x=a[i][0],y=a[i][1];
            //((y1-y0)/(x1-x0))!=((y-y0)/(x-x0))
            if((x-x0)*(y1-y0)!=(y-y0)*(x1-x0))return false;
        }
        return true;
    }
};