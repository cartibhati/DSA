class Solution {
  public:
    int countTriplets(int target, vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size()-2;i++){
            int left=i+1;
            int right=arr.size()-1;
            while(left<right){
                int sum=arr[i]+arr[left]+arr[right];
                if(sum>=target){
                    right--;
                }
                else{
                    ans=ans+(right-left);
                    left++;
                }
            }
        }
        return ans;
    }
};