class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();

        vector<int>firstOccurence(26,-1);
        vector<int>LastOccurence(26,-1);

        for(int i=0;i<n;i++)
        {
            if (firstOccurence[s[i]-'a']==-1)
            {
                firstOccurence[s[i]-'a']=i;
            }
            else{
                LastOccurence[s[i]-'a']=i;
            }
        }

        int uniqueCount=0;

        for(int i=0; i<26;i++){
            if(firstOccurence[i]!=-1 && LastOccurence[i]>firstOccurence[i])
            {
                unordered_set<char>seen;

                for(int j=firstOccurence[i]+1; j < LastOccurence[i]; j++ )
                {
                    seen.insert(s[j]);
                }
                uniqueCount =  uniqueCount + seen.size();
            }
        }
        return uniqueCount;
    }
};