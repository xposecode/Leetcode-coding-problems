class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;

        int bitmask = 0;
        for (char c : s) {
            bitmask ^= (1 << (c - 'a'));
        }

        int oddCount = __builtin_popcount(bitmask); //will count number of time 1 bit appears(odd number of times)
        return oddCount <= k;
    }
};