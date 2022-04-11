// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int Maximize(int arr[],int n)
    {
        // Complete the function
        // long long int mod=10000000007;
        long long int mod=1000000007;
        int sum=0;
        
        sort(arr,arr+n);
        for(long long i=0;i<n;i++)
        {
            sum = (sum + (i * arr[i]))%mod;
        }
            
        return sum%mod;
    }
};

// { Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}  // } Driver Code Ends