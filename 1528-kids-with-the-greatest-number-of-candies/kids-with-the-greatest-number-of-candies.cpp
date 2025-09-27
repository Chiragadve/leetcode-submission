class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>greatest(candies.size());

        int maxcandy = INT_MIN;
        for(int candy : candies){
            maxcandy = max(candy,maxcandy);
        }

        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= maxcandy){
                greatest[i] = true;
            }else{
                greatest[i] = false;
            }
        }
    return greatest;
    }
};