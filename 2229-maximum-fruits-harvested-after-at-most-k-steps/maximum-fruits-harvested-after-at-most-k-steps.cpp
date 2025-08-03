class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int maxFruits = 0, left = 0, sum = 0;

        for (int right = 0; right < fruits.size(); ++right) {
            sum += fruits[right][1];

            // Shrink the window if the minimal steps exceed k
            while (left <= right && getMinSteps(fruits[left][0], fruits[right][0], startPos) > k) {
                sum -= fruits[left++][1];
            }

            maxFruits = max(maxFruits, sum);
        }

        return maxFruits;
    }

private:
    int getMinSteps(int left, int right, int start) {
        int leftGo = abs(start - left) + (right - left);
        int rightGo = abs(start - right) + (right - left);
        return min(leftGo, rightGo);
    }
};
