class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        
        // Iterate through each word and check if it's a substring of another word
        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words.size(); ++j) {
                // Skip comparing the word with itself
                if (i != j && words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break; // Avoid duplicates; move to the next word
                }
            }
        }
        
        return result;
    }
};
