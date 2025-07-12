// T.C: O(2^(n/2)) 
// S.C: O(n * log n)
/* Players only fight when at SYMMETRIC POSITIONS (i vs n−1−i)
so at earliest time, Force them to symmetric positions ASAP... at latest timr, keep them on same side as long as possible. so we may try all match outcomes0
*/
class Solution {
public:
    int mn = INT_MAX;
    int mx = INT_MIN;
    int first, second;
    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer) {
        vector<int> arr(n);
        for(int i = 1; i <= n; i++)  arr[i - 1] = i;  // initial player lineup

        first = firstPlayer;
        second = secondPlayer;

        dfs(arr, 1);  // start DFS from round 1
        return {mn, mx};  // return earliest and latest round
    }
private: 
    void dfs(vector<int>& arr, int round) {
        int n = arr.size();
        int size = n / 2;
        // Base case: only one player left
        if(arr.size() == 1)  return;

        // Check if first and second meet this round
        for(int i = 0; i < size; i++) {
            if(arr[i] == first && arr[n - i - 1]  == second) {
                mn = min(mn, round);
                mx = max(mx, round);
                return;
            }
        }

        // If one of them is already eliminated, skip further recursion
        bool f1 = false, f2 = false;
        for (int i = 0; i < n; i++) {
            if(arr[i] == first)  f1 = true;
            if(arr[i] == second)  f2 = true;
        }

        if (!f1 || !f2) return;  // if either player is eliminated, stop

        // Prepare for next round
        vector<int> nextarr(size + (n % 2));

        int m = (1 << size) - 1;  // total combinations of win/loss for pairs
        for(int i = 0; i <= m; i++){   //try all the winning status for the left side players.
            int left = 0, right = nextarr.size() - 1;

            // Decide winner for each pair
            for (int j = 0; j < size; j++) {  
                if((1 << j) & i) { //left side player win, put it to the next array.
                    nextarr[left++] = arr[j];
                } else {
                    // Right player wins
                    nextarr[right--] = arr[n - j - 1];
                }
            }

            // If odd number of players, middle one auto-advances
            if (arr.size() % 2) {
                nextarr[left] = arr[arr.size() / 2];
            }

            // Recurse to simulate next round
            dfs(nextarr, round + 1);
        }
    }
};
/* 
1) seperate the team to left side and right side, use bit mask to try all the winning status of left side and generate the next round of players and go to the next round.
2) if we can match first player and second player in the current round, then calculate the max and min round.
3) if we can not find first and second player in current array, we can early return.


Space Comlexity Explaination: 
\U0001f501 1. Recursive calls (Call Stack Depth)
   Each round halves the number of players:

Round 1: n players
Round 2: n/2
Round 3: n/4
...

Until 1 player remains

So max depth of recursion = log₂(n)
✅ That part is O(log n)


\U0001f4e6 2. Space used in each recursive call
In each call, you create:

- A vector<int> nextarr of size up to n
- You pass this by value in dfs(nextarr, round + 1)

So each level uses up to O(n) space
BUT:

- Because of recursion and no reuse (you create new vectors), total space is not reused.
- Worst case: all levels active → log n calls × O(n) per call = O(n * log n) space.
*/