class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n= nums1.size();
        int m = nums2.size();
        // int mini=0;
          if (nums1[n-1] < nums2[0] || nums2[m-1] < nums1[0])
         return -1;

        while(i<n && j<m){


           if(nums1[i]==nums2[j]){
                return nums1[i]; // immediately return smallest common
            }
            else if(nums1[i]>nums2[j])
            j++;
            else
            i++;
        }
        return -1; // hehehehe
    }                                   
};                                                                           