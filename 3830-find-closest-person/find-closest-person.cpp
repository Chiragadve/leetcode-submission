class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xdist = abs(x-z);
        int ydist = abs(y-z);

        if(xdist < ydist) {
            return 1;
        }else if(xdist == ydist) {
            return 0;
        }else{
            return 2;
        }
    }
};