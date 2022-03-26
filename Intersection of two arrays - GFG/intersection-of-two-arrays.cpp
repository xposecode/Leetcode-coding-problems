// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
    set<int>map;      // Creating the set
    int count=0;      // Intializing the count with 0
    
    for(int i=0;i<n;i++)
    {
        // map[a[i]]++;
        map.insert(a[i]);    //Inserting the elements in the set
    }
    
    for(int i=0;i<m;i++)
    {
        if(map.find(b[i])!=map.end())   //finding in the other array=b
        {
            count++;                 //Incrementing the count every time if found
        }
        map.erase(b[i]);            //then erasing to avoid the overlapping
    }
    return count;                 //Returning the count
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}  // } Driver Code Ends