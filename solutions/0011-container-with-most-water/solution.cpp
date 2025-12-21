class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int area = 0;

        while(left < right){
            int w = right-left;
            int h = min(height[left], height[right]);

            int curWater = w*h;
            area = max(area, curWater);

            if(height[left] < height[right]){
                left += 1;
            } else {
                right -= 1;
            }
        }

        return area;

    }
};
