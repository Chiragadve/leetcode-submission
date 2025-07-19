class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++) {
            int val = nums1[i];
            int z;
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]) {
                    z = j;
                }
            }
            
            int nextGreater = -1;
            for(int k = z; k < nums2.size(); k++) {
                if(nums2[k] > val){
                    nextGreater = nums2[k];
                    break;
                }
            }
            result.push_back(nextGreater);
        }
    return result;
    }
};