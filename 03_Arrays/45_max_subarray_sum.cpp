class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {

        int n = arr.size();
        int low = 0;
        int high = k - 1;
        int sum = 0;

        // first window sum
        for (int i = low; i <= high; i++) {
            sum += arr[i];
        }

        int ans = sum;

        while (high < n - 1) {
            low++;
            high++;

            sum = sum - arr[low - 1];
            sum = sum + arr[high];

            ans = max(ans, sum);
        }

        return ans;
    }
};