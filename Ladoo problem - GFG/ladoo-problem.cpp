// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int divideLadoo(int n ,int arr[]) {
        // code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     if(mp[i]>1)
        //     {
        //         n=n-1;
        //     }
        // }
        return mp.size();
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.divideLadoo(N,A) << endl;
    }
    return 0;
}  // } Driver Code Ends