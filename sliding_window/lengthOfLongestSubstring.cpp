/*
Bài toán:
- Tìm độ dài chuỗi con dài nhất không có ký tự lặp.

Ý tưởng:

1. O(n^2):
- Dùng 2 con trỏ, xét mọi chuỗi con.
- Nếu trùng → tăng left từng bước (left++).

2. O(n):
- Sliding window + hashmap lưu vị trí xuất hiện gần nhất.
- Nếu trùng → nhảy:
      left = lastSeen[c] + 1
- Cập nhật:
      maxLen = max(maxLen, right - left + 1)

Độ phức tạp:
- Cách 1: O(n^2)
- Cách 2: O(n)
*/



#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0;
        int maxLen = 0;
        
        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (lastSeen.count(c) && lastSeen[c] >= left) {
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right;

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};

int main() {
    string s;
    
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout<< s ;
    Solution sol;
    int result = sol.lengthOfLongestSubstring(s);

    cout << "Do dai chuoi con khong lap dai nhat: " << result << endl;

    return 0;
}