class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int temp = -1;

        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                temp = nums[i];
                count = 1;
            } else if(nums[i] == temp){
                count++;
            } else {
                count--;
            }
        }

        count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == temp){
                count++;
            }
        }

        if(count > (nums.size()/2)){
            return temp; 
        }

        return -1;
    }
};
