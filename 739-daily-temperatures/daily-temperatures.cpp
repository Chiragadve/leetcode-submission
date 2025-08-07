class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> days(n,0);
        stack<int>st;

        for(int i = 0; i < n; i++) {
            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int previndex = st.top();
                st.pop();
                days[previndex] = i - previndex;
            }
        st.push(i);
        }
    return days;
    }
};