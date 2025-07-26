class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        long long valid = 0;

        // Build a graph where conflictingPoints[i] = list of points that conflict with i
        vector<vector<int>> conflictingPoints(n + 1);

        // Store smaller point 'a' in the list of the larger point 'b'
        for (auto &p : conflictingPairs) {
            int a = min(p[0], p[1]);
            int b = max(p[0], p[1]);
            conflictingPoints[b].push_back(a);
        }

        // To track extra subarrays if we remove conflicting point i
        vector<long long> extra(n + 1, 0);

        int maxConflict = 0;
        int secondMaxConflict = 0;

        for (int end = 1; end <= n; ++end) {
            // Find two maximum conflicting points for 'end'
            for (int &u : conflictingPoints[end]) {
                if (u >= maxConflict) {
                    secondMaxConflict = maxConflict;
                    maxConflict = u;
                } else if (u > secondMaxConflict) {
                    secondMaxConflict = u;
                }
            }

            // Valid subarrays ending at index 'end'
            valid += (end - maxConflict);

            // Compute extra subarrays possible if we remove the worst conflict
            extra[maxConflict] += (maxConflict - secondMaxConflict);
        }

        // Return total valid subarrays + max gain by removing any conflict point
        return valid + *max_element(extra.begin(), extra.end());
    }
};
