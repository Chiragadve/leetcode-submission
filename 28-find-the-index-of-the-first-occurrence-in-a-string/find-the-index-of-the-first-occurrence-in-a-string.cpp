class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = needle.length();
        int result = -1;
        for(int i = 0; i < haystack.length(); i++) {
            if(needle == haystack.substr(i,len)){
                result = i;
                break;
            }
        }
    return result;
    }
};