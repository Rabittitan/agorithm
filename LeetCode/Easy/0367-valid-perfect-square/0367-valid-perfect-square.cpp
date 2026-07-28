class Solution {
public:
    bool isPerfectSquare(int num) {
        // int base = 1;
        // while(num > 0){
        //     num -= base;
        //     base += 2;
        // }

        // return num == 0;


        if(num==1) return true;
        for(long long i=1;i<=num/2;i++){
            long long square = i*i;
            if(square==num) return true;
        }
        return false;
    }
};