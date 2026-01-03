class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<vector<int>> answer(2);

        for (auto val : set1) {
            if (set2.find(val) == set2.end()) {
                answer[0].push_back(val);
            }
        }
        for (auto val : set2) {
            if (set1.find(val) == set1.end()) {
                answer[1].push_back(val);
            }
        }
        return answer;
    }
};