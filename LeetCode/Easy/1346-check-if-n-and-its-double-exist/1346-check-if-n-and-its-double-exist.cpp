class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;

        for (int x : arr) {
            // kiểm tra đã có số thỏa điều kiện chưa
            if (s.count(x * 2) || (x % 2 == 0 && s.count(x / 2))) {
                return true;
            }
            s.insert(x);
        }

    return false;
    }
};