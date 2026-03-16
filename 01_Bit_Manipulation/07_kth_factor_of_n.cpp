int kthFactor(int n, int k) {
    vector<int> ans;
    
    // Loop only till √n
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
            if(i != n / i)              // avoid duplicate for perfect square
                ans.push_back(n / i);
        }
    }
    
    sort(ans.begin(), ans.end());   // divisors come unordered
    
    if(k > ans.size()) return -1;
    return ans[k-1];
}