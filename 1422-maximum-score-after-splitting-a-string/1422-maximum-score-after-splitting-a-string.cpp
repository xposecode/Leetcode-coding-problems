class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0; // Count the total number of '1's in the string
        for (char c : s) {
            if (c == '1') totalOnes++;
        }

        int leftZeros = 0, rightOnes = totalOnes, maxScore = 0;

        // Iterate over possible splits (excluding the last character)
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '0') {
                leftZeros++;
            } else {
                rightOnes--;
            }
            maxScore = std::max(maxScore, leftZeros + rightOnes);
        }

        return maxScore;
    }
};
