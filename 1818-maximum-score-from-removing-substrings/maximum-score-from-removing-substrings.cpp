class Solution {
public:
    int maximumGain(string s, int x, int y) {
        // Always remove the higher score pair first
        if (x < y) {
            swap(x, y);
            reverse(s.begin(), s.end());
        }

        int total = 0;
        stack<char> st;

        // First pass: remove all "ab" pairs
        for (char c : s) {
            if (!st.empty() && st.top() == 'a' && c == 'b') {
                st.pop();
                total += x;
            } else {
                st.push(c);
            }
        }

        // Second pass: remove all "ba" pairs from remaining stack
        string remaining;
        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());

        for (char c : remaining) {
            if (!st.empty() && st.top() == 'b' && c == 'a') {
                st.pop();
                total += y;
            } else {
                st.push(c);
            }
        }

        return total;
    }
};
