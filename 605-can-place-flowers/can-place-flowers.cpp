class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = flowerbed.size();
        if(n == 0) return true;

        for (int i = 0; i < k; i++) {
            if (flowerbed[i] == 0) {
                bool left_check = (i == 0) || (flowerbed[i - 1] == 0);
                bool right_check = (i == k - 1) || (flowerbed[i + 1] == 0);

                if (left_check && right_check) {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0)
                        return true;
                }
            }
        }
        return false;
    }
};