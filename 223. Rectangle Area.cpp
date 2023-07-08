class Solution {
public:
    int area(int x1,int y1,int x2,int y2){
        int height = y2-y1;
        int width = x2-x1;
        return height * width;
    }
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
        int A1=area(ax1,ay1,ax2,ay2);
        int A2=area(bx1,by1,bx2,by2);
        if(bx1>=ax2 || bx2<=ax1 || by2<=ay1 || by1>=ay2)return A1+A2;
        int A3 = area(max(ax1,bx1),max(ay1,by1),min(ax2,bx2),min(ay2,by2));
        return A1+A2-A3;
    }
};;