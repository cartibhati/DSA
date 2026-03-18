class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==target)
            return vector<int>{i + 1, j + 1};

            if(nums[i]+nums[j]>target)
            j--;

            if(nums[i]+nums[j]<target)
            i++;
        }
        return vector<int>{i + 1, j + 1};
    }
};