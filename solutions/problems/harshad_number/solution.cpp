class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        if (x == 0) return -1;
        int sum = 0;
        int temp = x;
        while(temp>0){
            int digit = temp%10;
            sum += digit;
            temp/=10;
        }
        return(x%sum == 0) ? sum : -1;
    }
};