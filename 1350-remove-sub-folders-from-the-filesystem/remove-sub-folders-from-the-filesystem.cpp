class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector <string> result;
        sort(folder.begin(),folder.end());

        result.push_back(folder[0]);

        for(int i = 1; i < folder.size(); i++) {
            string last = result.back() + "/";

            if(folder[i].compare(0,last.size(),last) != 0){
                result.push_back(folder[i]);
            }
        }
    return result;
    }
};