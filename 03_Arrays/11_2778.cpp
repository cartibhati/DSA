class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int pos=i+1;
            if(nums.size()%pos==0){
                ans+=nums[i]*nums[i];
            }
        }
        return ans;
    }
};