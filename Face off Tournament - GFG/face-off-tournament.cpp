// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string winner(int x, int m, int n, long long arr[])
    {
        // code here
        int count=0,mid=0;
        for(int i=0;i<x;i++)
        {
            if(arr[i]%m==0)
            count++;
            else if(arr[i]%n==0)
            mid++;
            
        }
        if(count>mid){
            return "Ram";
        }
        else if (count<mid){
            return "Rohan";
        }
        else{
            return "Both";
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, m, n;
        cin>>x>>m>>n;
        long long arr[x];
        for(int i = 0;i < x;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.winner(x, m, n, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends