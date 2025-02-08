class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            int value = target-nums[i];
            auto result = mpp.find(value);
            if(result != mpp.end()){
                return {mpp[value], i};
            }
            else{
                mpp.insert({nums[i],i});
            }
        }
        return {};
    }
};
