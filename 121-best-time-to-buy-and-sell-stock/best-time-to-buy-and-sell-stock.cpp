class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int investment = INT_MAX;
       int maxProf = 0;

       for(int price : prices) {
            investment = min(investment,price);
            maxProf = max(maxProf,price - investment);
       }
    return maxProf;     
    }
};