class Solution
{
public:
    bool canConstruct(string s, int k)
    {
        // If k is greater than the length of the string, we can't create k palindromes
        if (k > s.size())
            return false;

        // Count the frequency of each character in the string
        unordered_map<char, int> charCount;
        for (char c : s)
        {
            charCount[c]++;
        }

        // Count the number of characters with odd frequencies
        int oddCount = 0;
        for (const auto& pair : charCount)
        {
            if (pair.second % 2 != 0)
            {
                oddCount++;
            }
        }

        // To form k palindromes, we need at least `oddCount` palindromes (one for each odd character count)
        // If `oddCount` is less than or equal to k, we can construct k palindromes
        return oddCount <= k;
    }
};