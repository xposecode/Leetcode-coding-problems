// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        // code here
         unordered_map<string, long long>mp;
        for(int i = 0; i < N; i++){
            mp[to_string(numbers[i])]++;
        }
        long long ans = 0;
        string num = to_string(X);
        for(int i = 0 ; i < num.size(); i++){
            string s1 = num.substr(0, i+1);
            string s2 = num.substr(i+1);
            if(s1 == s2){
                ans += mp[s1]*(mp[s1]-1);
                continue;
            }
            if(mp.find(s1) != mp.end() && mp.find(s2) != mp.end()){
                ans += mp[s1]*mp[s2];
            }
        }
        return ans;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends