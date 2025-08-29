class Solution {
public:
    long long flowerGame(int n, int m) {
        long long Odd_n = ceil((n+1)/2);
        long long Even_n = n/2;
        long long Odd_m = ceil((m+1)/2);
        long long Even_m = m/2;

        return (Odd_n * Even_m) + (Odd_m * Even_n);
        
    }
};