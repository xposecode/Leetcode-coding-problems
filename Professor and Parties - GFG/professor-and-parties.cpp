// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    
    string PartyType(long long int arr[], int n)
    {
        // Your code goes here
        unordered_map<long,long>map;
        for(int i=0;i<n;i++)
        {
            map[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(map[arr[i]]>1)
            {
                return "BOYS";
            }
        }
        return "GIRLS";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        long long int a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        Solution ob;
        cout<< ob.PartyType(a, n) <<endl;
        
    }
    return 0;
}
  // } Driver Code Ends