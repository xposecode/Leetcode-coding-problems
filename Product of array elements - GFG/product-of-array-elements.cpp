// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



 // } Driver Code Ends
//User function Template for C++



/*  
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int a[], int n, long long int mod)
 {
     
     //code here
     long long prod=1;
     for(long long i=0;i<n;i++)
     {
         prod=prod*a[i];
         prod=prod%mod;
     }
     return prod%mod;
     
 }

// { Driver Code Starts.

int main()
{
 int t;
 cin>>t;
 while(t--)
   {
    int n;
    cin>>n;
    int ar[100001]={0};
    for(int i=0;i<n;i++)
      cin>>ar[i];  
      
    long long int mod=1000000007;
   cout<<product(ar,n,mod)<<endl;
    
 }
return 0;
}  // } Driver Code Ends