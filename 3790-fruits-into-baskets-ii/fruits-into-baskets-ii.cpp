class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
      int placed = 0;

      for(int fruit : fruits){
        for(int j = 0; j < baskets.size(); j++) {
            if(fruit <= baskets[j]){
                placed++;
                baskets.erase(baskets.begin() + j);
                break;
            }
        }
      }
    return fruits.size() - placed;
    }
};