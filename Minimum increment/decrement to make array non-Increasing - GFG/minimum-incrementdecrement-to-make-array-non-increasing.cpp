// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
public:
    int minOperations(int *a,int n)
    {
        priority_queue<int> pq; // for creating                      //min queue 
       // push -1*a[i]
       int ans = 0;
       for(int i=0;i<n;i++)
       {
           if(!pq.empty() && -1*pq.top()<a[i])
           {
               ans += (a[i]-(-1)*pq.top());
               pq.push(-1*a[i]);
               pq.pop();
           }
           pq.push(-1*a[i]);
       }
       return ans;
       
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout<<ob.minOperations(a,n)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends