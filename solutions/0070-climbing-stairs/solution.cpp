class Solution {
public:
    int climbStairs(int n) {
        int min = 1, max = 1;
        for(int i = 2; i <= n; i++){
            int temp = max;
            max = max + min;
            min = temp;
        }
        return max;
    }
};
