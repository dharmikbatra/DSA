class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int r1 = abs(ax1-ax2)*abs(ay1-ay2);
        int r2 = abs(bx1-bx2)*abs(by1-by2);
        if(bx1>=ax2){return r1+r2;}
        else if(ax1>=bx2){return r1+r2;}
        else if(ay1>=by2){return r1+r2;}
        else if(ay2<=by1){return r1+r2;}
        int r3 = abs(max(bx1,ax1)-min(ax2,bx2))*abs(max(ay1,by1)-min(ay2,by2));
        return r1+r2-r3;        
    }
};