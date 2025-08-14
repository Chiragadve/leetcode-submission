class Solution {
public:
    string largestGoodInteger(string num) {
        int i = 0;
        int j = 1;
        string str = "";
        int result = INT_MIN;
        while(j < num.length() - 1){
            if(num[i] == num[j] && num[j] == num[j+1]){
               str += num[i];
               int val = stoi(str);
               result = max(result,val);
               str = "";
            }
            i++;
            j++;
        }
        if(result == INT_MIN){
            return "";
        }
    string f = (3,to_string(result));
    string res = f + f + f;
    return res;
    }
};