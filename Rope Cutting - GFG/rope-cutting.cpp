// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        vector<int>v;
        
        sort(arr,arr+n);
        
        int x= arr[0];
        int i=0;
        while(i<n)
        {
            if(arr[i]-x>0)
            {
                v.push_back(n-i);
            }
            x= arr[i];
            i++;
        }
        return v;
        
    }
};

// { Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}  // } Driver Code Ends