#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        vector<int> result = {-1, -1};
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[0] = mid;
                result[1] = mid;
                while (result[0] > 0 && nums[result[0] - 1] == target) {
                    result[0]--;
                }
                while (result[1] < nums.size() - 1 && nums[result[1] + 1] == target) {
                    result[1]++;
                }
                return result;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
};
