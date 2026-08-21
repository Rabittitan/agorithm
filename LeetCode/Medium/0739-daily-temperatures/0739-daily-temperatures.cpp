class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> answer(n, 0);

        for(int i = 0; i < temperatures.size(); i++){

            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                int top = st.top();
                st.pop();
                answer[top] = i - top;
            }
            st.push(i);
        }
        return answer;
    }
};