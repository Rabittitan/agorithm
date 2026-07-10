class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string cur, ans;
        stringstream ss(path);

        while (getline(ss, cur, '/')) {
            if (cur.empty() || cur == ".") continue;
            if (cur == "..") {
                if (!st.empty()) st.pop();
            } else {
                st.push(cur);
            }
        }

        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        return ans.empty() ? "/" : ans;
    }
    


};