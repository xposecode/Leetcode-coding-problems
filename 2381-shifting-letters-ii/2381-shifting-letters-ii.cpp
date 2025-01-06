class Solution
{
    public:
        string shiftingLetters(string s, vector<vector < int>> &shifts)
        {
            int n = s.length();
            vector<int> diff(n + 1, 0);	// Difference array

           	// Build the difference array for shifts
            for (auto &shift: shifts)
            {
                int start = shift[0], end = shift[1], direction = shift[2];
                int delta = (direction == 1) ? 1 : -1;	// 1 for forward, -1 for backward
                diff[start] += delta;
                diff[end + 1] -= delta;
            }

           	// Compute the prefix sum to determine the net shift for each character
            int netShift = 0;
            for (int i = 0; i < n; ++i)
            {
                netShift += diff[i];
               	// Apply the net shift to the character at index `i`
                int newChar = (s[i] - 'a' + netShift) % 26;
                if (newChar < 0) newChar += 26;	// Handle negative shifts
                s[i] = 'a' + newChar;
            }

            return s;
        }
};