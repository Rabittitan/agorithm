class Solution {
public:
    bool isPerfectSquare(int num) {
        int base = 1;
        while(num > 0){
            num -= base;
            base += 2;
        }

        return num == 0;
    }
};