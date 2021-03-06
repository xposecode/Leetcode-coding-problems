// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


 // } Driver Code Ends
class Solution
{
      int LCS(string s1, string s2) {
       
       int n1 = s1.length(), n2 = s2.length();
       int dp[n1 + 1][n2 + 1];
       memset(dp, 0, sizeof(dp));
   
       for(int i = 1; i <= n1; i++)
       {
           for(int j = 1; j <= n2; j++)
           {
               if(s1[i - 1] == s2[j - 1])
                   dp[i][j] = 1 + dp[i - 1][j - 1];
               else
                   dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
           }
       }
       
       return dp[n1][n2];
   }
    public:
    int build_bridges(string str1, string str2)
    {
        // code here
        return LCS(str1, str2);
    }
};

// { Driver Code Starts.
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        Solution obj;
        cout<<obj.build_bridges(str1,str2)<<endl;
    } 
    return 0;
} 
  // } Driver Code Ends