class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start = "";
        for (auto &row : board) {
            for (int x : row)
                start += char(x + '0');
        }

        string target = "123450";

        vector<vector<int>> neighbors = {
            {1, 3},       
            {0, 2, 4},    
            {1, 5},       
            {0, 4},       
            {1, 3, 5},     
            {2, 4}         
        };

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.push({start, 0});
        visited.insert(start);

        while (!q.empty()) {
            auto [curr, steps] = q.front();
            q.pop();

            if (curr == target)
                return steps;

            int zero = curr.find('0');

            for (int next : neighbors[zero]) {
                string temp = curr;
                swap(temp[zero], temp[next]);

                if (!visited.count(temp)) {
                    visited.insert(temp);
                    q.push({temp, steps + 1});
                }
            }
        }

        return -1;
    
    }
};