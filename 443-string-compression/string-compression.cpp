class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int count = 1;

        for (int i = 0; i < chars.size(); i++) {
            if (i == chars.size() - 1 || chars[i] != chars[i + 1]) {
                chars[write++] = chars[i];

                if (count > 1) {
                    string cnt = to_string(count);
                    for (auto c : cnt) {
                        chars[write++] = c;
                    }
                }
                count = 1;
            } else {
                count++;
            }
        }
        return write;
    }
};