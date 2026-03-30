class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cand=nums[i];
                cnt++;
            }
            else if(nums[i]==cand)
            cnt++;
            else
            cnt--;
        }
        return cand;
    }
};