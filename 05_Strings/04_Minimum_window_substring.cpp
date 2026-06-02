class Solution {
public:
    bool sahi(vector<int>& have, vector<int>& need) {
        for(int i = 0; i < 256; i++) {
            if(have[i] < need[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        vector<int> have(256, 0);
        vector<int> need(256, 0);

        int n = t.size();
        int m = s.size();

        if(m < n) return "";

        for(char c : t)
            need[c]++;

        int low = 0;
        int start = 0;
        int res = INT_MAX;

        for(int high = 0; high < m; high++) {
            have[s[high]]++;

            while(sahi(have, need)) {
                int len = high - low + 1;

                if(len < res) {
                    res = len;
                    start = low;
                }

                have[s[low]]--;
                low++;
            }
        }

        if(res == INT_MAX) return "";

        return s.substr(start, res);
    }
};