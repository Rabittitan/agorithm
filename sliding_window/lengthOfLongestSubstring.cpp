/*
-  Tìm độ dài của chuỗi con dài nhất sao cho không có ký tự nào bị lặp lại.

In: là 1 chuổi kí tự bao gồm các kí tự đặc biệt.
out:  là số lương kí tự lớn nhất không có kí tự bị lặp

slution dùng 2 con trỏ left right để chạy hết cái string sử dụng sliding window vì nó là các giá trị liền kề nhau.

mô tả ban đâu giá trị đầu tiên left right bằng nhau sau đó right tăng lên kiểm tra xem có kí tự nào bị trùng không(while) nếu không tăng tiếp và update maxlen nếu mà bị trùng thì left++ tăng lên right tăng tiếp và lại tiếp tục kiểm tra rồi update tương tự. (O(n2))


slution update:

dùng hashmap để lưu lấy giá trị trc  khi kiểm tra hỏi lại hashmap có kí tự không nếu có thì nó ở vị trí nào rồi đưa left với vị trí lastseen + 1; (O(n))

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