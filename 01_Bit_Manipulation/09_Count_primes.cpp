class Solution {
public:
    int countPrimes(int n) {
    int cnt = 0;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;  // explicitly mark

    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            cnt++;
            // only mark multiples if i*i doesn't overflow
            for (long long j = (long long)i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return cnt;
}
};