class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--){


             if(digits[i] < 9){
               digits[i] = digits[i] + 1;
               break;
            }
            
            if(digits[i] == 9){
                digits[i] = 0;
            }

            if(digits[0] == 0) {
                digits.insert(digits.begin(),1);
            }

        }
    return digits;
    }
};