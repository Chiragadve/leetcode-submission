class Solution {
public:
    string makeFancyString(string s) {
       int count = 0;
       string result;
       for(int i = 0; i < s.length();i++) {
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                count = 0;
            }
            if(count < 2){
                result+= s[i];
            }
         
       }
    return result;
    }
};