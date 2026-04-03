class Solution {
public:
    bool possible(vector<int>& nums, int day, int m, int k){
        int cnt = 0, num = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= day){
                cnt++;
                if(cnt == k){
                    num++;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }

        return num >= m;
    }

    int minVal(vector<int>& nums){
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            mini = min(mini, nums[i]);
        }
        return mini;
    }

    int maxVal(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n < 1LL * m * k) return -1;

        int s = minVal(bloomDay);
        int e = maxVal(bloomDay);

        int ans = -1;
        if(n < 1LL * m * k) return -1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(possible(bloomDay, mid, m, k)){
                ans = mid;
                e = mid - 1;   // try smaller day
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};