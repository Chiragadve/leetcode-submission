class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_set<int> set;
        unordered_map<int, int> mp;

        for (int x : arr) {
            mp[x]++;
        }

        for (auto& pair : mp) {
            if (set.count(pair.second)) {
                return false;
            }
            set.insert(pair.second);
        }
        return true;
    }
};