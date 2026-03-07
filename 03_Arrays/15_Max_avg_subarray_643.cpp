class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        // float avgsum=0;

        for(int i = 0; i < k; i++){
            sum += nums[i];
            // avgsum=sum/k;
        }

        int ans=sum;

        for(int r=k;r<n;r++){
            sum=sum+nums[r];
            sum=sum-nums[r-k];
            // avgsum=sum/k;
            ans=max(ans,sum);
        }
        return double(ans)/k;
    }
};