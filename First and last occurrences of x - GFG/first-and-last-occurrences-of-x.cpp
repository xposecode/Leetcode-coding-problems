// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int a,b;
    
    a=lower_bound(arr,arr+n,x)-arr;    
    b=upper_bound(arr,arr+n,x)-arr-1;  
    
    if(n==0||arr[a]!=x||arr[b]!=x)
    {
        return {-1,-1};
    }
    return {a,b};    //Returning the lower_bound and upper_bound as a pair
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends