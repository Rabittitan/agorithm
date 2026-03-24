/*
    Mô tả:
    Cho chuỗi s và số nguyên k. Bạn có thể thay tối đa k ký tự bất kỳ
    để biến một đoạn con thành toàn bộ cùng một ký tự.

    Yêu cầu:
    Tìm độ dài lớn nhất của đoạn con thỏa điều kiện.

    Ý tưởng:
    Sử dụng Sliding Window, theo dõi tần suất ký tự nhiều nhất trong cửa sổ.
    Nếu số ký tự cần thay > k thì thu hẹp cửa sổ.

    Độ phức tạp: O(n)
    
*/

#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int characterReplacement(string s, int k) {
    unordered_map<char, int> freq;
    
    int left = 0;
    int maxFreq = 0;
    int maxLen = 0;
    
    for (int right = 0; right < s.size(); right++) {
        char c = s[right];

        freq[c]++; 
        maxFreq = max(maxFreq, freq[c]);

        if ((right - left + 1) - maxFreq > k) {
            freq[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }
    
    return maxLen;
}

int main() {
    string s;
    int k;

    cout << "Nhap chuoi: ";
    cin >> s;

    cout << "Nhap k: ";
    cin >> k;

    int result = characterReplacement(s, k);

    cout << "Do dai lon nhat: " << result << endl;

    return 0;
}