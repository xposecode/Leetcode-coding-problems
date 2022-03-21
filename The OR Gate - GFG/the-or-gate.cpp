// { Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
   
class Solution{
public:
    int orGate(vector<int> arr,int n){
        // code here 
        
        int ans=arr[0];
        
        for(int i=0;i<n;i++)
        {
            ans = ans | arr[i];
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.orGate(v,N) << endl;
    }
    return 0; 
}  // } Driver Code Ends