class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandy = 0;
        vector<bool> v;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > maxcandy) {
                maxcandy = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= maxcandy) {
                v.push_back(true);
            } else {
                v.push_back(false);
            }
        }
        return v;
    }
};