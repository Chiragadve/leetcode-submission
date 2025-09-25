class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min_num = INT_MAX;
        int max_num = -1;

        for(int num : nums){
            min_num = min(num,min_num);
            max_num = max(num,max_num);
        }

        while(max_num != 0){
            int temp = max_num;
            max_num = min_num % max_num;
            min_num = temp;
        }

        return min_num;

    // return gcd(min_num,max_num); // stl library
    }
};