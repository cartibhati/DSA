class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);

        // Count magazine letters
        for (char c : magazine) {
            freq[c - 'a']++;
        }

        // Try to build ransom note
        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0)
                return false;
            freq[c - 'a']--;
        }

        return true;
    }
};