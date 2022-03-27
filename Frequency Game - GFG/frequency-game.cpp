// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) {
    // code here
    // map<int,int>map(arr,arr+n);
    // vector<int>v;
    // int elemax=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(map[arr[i]]==1)
    //     {
    //         // elemax = max(elemax,arr[i]);
    //         v.push_back(arr[i]);
    //     }
    // }
    // sort(v.begin(),v.end());
    // return v[n-1];
    
    sort(arr,arr+n);
    return arr[n-1];
    
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}  // } Driver Code Ends