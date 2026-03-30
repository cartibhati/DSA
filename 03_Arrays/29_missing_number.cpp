class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Sort loop
        int i = 0;
        while(i < nums.size()) {
            int correct = nums[i];
            if(nums[i] < nums.size() && nums[i] != nums[correct])
                swap(nums[i], nums[correct]);
            else
                i++;
        }

        // Find missing loop
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i)      // 0 to n range → nums[i] should equal i
                return i;
        }
            return nums.size();       // if all present → n is missing
     }
};