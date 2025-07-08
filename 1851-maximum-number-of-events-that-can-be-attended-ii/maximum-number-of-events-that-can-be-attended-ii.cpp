class Solution {
public:
    int n;
    vector<vector<int>> t;

    int solve(vector<vector<int>>& events, int idx, int k) {
        if (idx >= n || k == 0)
            return 0;

        if (t[idx][k] != -1)
            return t[idx][k];

        int value = events[idx][2];

        // Option 1: skip
        int skip = solve(events, idx + 1, k);

        // Option 2: take → use binary search to find next non-overlapping event
        int j = upper_bound(events.begin(), events.end(), events[idx][1],
            [](int target, const vector<int>& event) {
                return target < event[0];
            }) - events.begin();

        int take = value + solve(events, j, k - 1);

        return t[idx][k] = max(skip, take);
    }

    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end()); // Sort by start time
        n = events.size();
        t.assign(n + 1, vector<int>(k + 1, -1));
        return solve(events, 0, k);
    }
};
