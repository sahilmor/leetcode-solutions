class Solution {
public:
    int reverse(int x) {
        int value = 0;
        while( x != 0){
            int lastDigit = x % 10;

            if((value < INT_MIN / 10) || (value > INT_MAX / 10)){
                return 0;
            }

            value = value * 10 + lastDigit;
            x /= 10;
        }
        return value;
    }
};
