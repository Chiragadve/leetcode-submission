class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cur_alt = 0;
        int max_alt = 0;
        
        for(int i = 0; i < gain.size(); i++){
            cur_alt += gain[i];
            if(cur_alt > max_alt) {
                max_alt = cur_alt;
            }
        }
        return max_alt;
    }
};