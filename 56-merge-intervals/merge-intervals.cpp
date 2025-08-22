class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        queue<pair<int, int>> q;
        for (auto it : intervals) {
            q.push({it[0], it[1]});
        }

        vector<vector<int>> ans;
        while (!q.empty()) {
            auto first = q.front();
            q.pop();
            int currStart = first.first;
            int currEnd = first.second;

            while (!q.empty() && q.front().first <= currEnd) {
                auto second = q.front();
                q.pop();
                currEnd = max(currEnd, second.second);
            }

            ans.push_back({currStart, currEnd});
        }
        return ans;
    }
};