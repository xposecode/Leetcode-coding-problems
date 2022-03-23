// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    long long smallestpositive(vector<long long> array, int n)
    { 
        // code here 
        // int arr[n];
        sort(array.begin(),array.end());  // 1 3 6 10 11 15
        long long sum=1;
        for(auto i : array)
        {
            // sum =sum + arr[i];
            if(sum>=i)
            {
                sum+=i;
            }
            
            // arr[i]=sum;
        }
        return sum;
          
    } 
};


// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>array[i];
        }
        Solution ob;
        cout<<ob.smallestpositive(array,n)<<"\n";
    }
    return 0; 
} 
  // } Driver Code Ends