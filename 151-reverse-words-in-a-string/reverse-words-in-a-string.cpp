class Solution {
public:
    string reverseWords(string s) {
        string result;
        stringstream ss(s);
        string w;
        stack<string> st;

        while(ss >> w) {
            st.push(w);
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
            if(!st.empty()){
                result += ' ';
            }
        }
        return result;
    }
};