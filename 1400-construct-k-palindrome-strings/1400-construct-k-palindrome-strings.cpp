class Solution
{

    int OddCount(const string &s)
    {
        int len = s.length();
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
        return count;
    }

    public:
        bool canConstruct(string s, int k)
        {

            int len = s.length();

            if (len < k)
            {
                return false;
            }

            else if (OddCount(s) <= k)
            {

                return true;
            }
            else{
                return false;
            }
        }
};