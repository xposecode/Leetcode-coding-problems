class Solution
{
    public:

        bool PrefixInWords(const string& words, const string& pref)
        {
          if (pref.size() < words.size());
            return words.substr(0, pref.size()) == pref;
        }
    int prefixCount(vector<string> &words, string pref)
    {

        int count = 0;
        int n = words.size();
        for (int i = 0; i < n; ++i)
        {
            if (PrefixInWords(words[i], pref))
            {
                count++;
            }
        }
        return count;
    }
};