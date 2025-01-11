class Solution
{
    public:
        bool canConstruct(string s, int k)
        {

            int len = s.length();

            if (len < k)
            {
                return false;
            }

            int count = 0;
            map<char, int> freq;
            for (int i = 0; i < len; ++i)
            {
                freq[s[i]]++;
            }
            for (auto it = freq.begin(); it != freq.end(); ++it)
            {
                if (it->second % 2 != 0)
                {
                    count++;
                }
            }
        
    return count <= k;
        }
};