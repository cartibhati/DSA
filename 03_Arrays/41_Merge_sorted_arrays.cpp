class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        ans.reserve(m + n); // Pre-allocate to avoid reallocation
        int i = 0; // Index for nums1
        int j = 0; // Index for nums2
        
        // Merge while both arrays have elements
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        // Copy remaining elements from nums1
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }
        
        // Copy remaining elements from nums2
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }
        
        // Assign back to nums1
        nums1 = ans;
    }
};   