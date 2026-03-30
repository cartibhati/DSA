class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int x:nums){
            sum+=x;
        }
        int Lsum=0;
        int Rsum;
        for(int i=0;i<nums.size();i++){
            Rsum = sum-Lsum-nums[i];
            if(Lsum==Rsum)
            return i;
            Lsum+=nums[i];
        }
        return -1;
    }
};