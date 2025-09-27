class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 1;
        int fsize = flowerbed.size();
        if (fsize < 2 && flowerbed[0] == 0) {
            return true;
        }

        while (i > 0 && i < flowerbed.size()) {
            if (flowerbed[0] == 0 && flowerbed[1] == 0) {
                flowerbed[0] = 1;
                n--;
            }

            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
            if (flowerbed[fsize - 1] == 0 && flowerbed[fsize - 2] == 0) {
                flowerbed[fsize - 1] = 1;
                n--;
            }
            i++;
        }
        if (n <= 0) {
            return true;
        }
        return false;
    }
};