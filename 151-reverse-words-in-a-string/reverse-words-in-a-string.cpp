class Solution {
public:
    string reverseWords(string s) {
        string result;
        stack<string> st;
        stringstream ss(s);
        string t;

        while(ss >> t){
            st.push(t);
        }

        while(!st.empty()){
            result +=st.top();
            st.pop();
            if(!st.empty()){
                result+= ' ';
            }
        }
    return result;
    }
};