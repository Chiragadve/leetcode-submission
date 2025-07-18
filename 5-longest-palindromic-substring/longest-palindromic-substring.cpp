class Solution {
public:
    string longestPalindrome(string s) {
    if (s.empty()) return "";

      int startIndex = 0;
      int maxLength = 0;

      for(int i = 0; i < s.length(); i++) {
         int len1 = expandfromcenter(s,i,i);
         int len2 = expandfromcenter(s,i,i+1);
         int len = max(len1,len2);
        
        if(len > maxLength){
            maxLength = len;
            startIndex = i - (len - 1) / 2;
      }
      }
    
    return s.substr(startIndex,maxLength);
    }


    int expandfromcenter(string & s, int i,int j) {
        while(i >= 0 && j < s.length() && s[i] == s[j]) {
            i--;
            j++;
        }
        return j - i - 1;
    }
};


