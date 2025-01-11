class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxFreq(26, 0); // To store the maximum frequency of each character in words2
        
        // Calculate the maximum frequency of each character required by words2
        for (const string& word : words2) {
            vector<int> freq(26, 0); // Frequency of characters in the current word
            for (char c : word) {
                freq[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                maxFreq[i] = max(maxFreq[i], freq[i]);
            }
        }

        vector<string> result;

        // Check each word in words1
        for (const string& word : words1) {
            vector<int> freq(26, 0); // Frequency of characters in the current word
            for (char c : word) {
                freq[c - 'a']++;
            }

            // Check if the current word meets the maximum frequency requirements
            bool isUniversal = true;
            for (int i = 0; i < 26; ++i) {
                if (freq[i] < maxFreq[i]) {
                    isUniversal = false;
                    break;
                }
            }

            if (isUniversal) {
                result.push_back(word);
            }
        }

        return result;
    }
};
