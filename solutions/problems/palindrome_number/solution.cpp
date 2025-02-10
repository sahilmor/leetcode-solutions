class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }

        long long reversedValue = 0;
        long long value = x;

        while(value != 0){
            int digit = value % 10;
            reversedValue = reversedValue * 10 + digit;
            value /= 10;
        }
        return(reversedValue == x);
    }
};