// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	    // Your code goes here
	    set<long long int>set;
	    vector<long long>v;
	    for(int i=0;i<m;i++)
	    {
	        set.insert(b[i]);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(set.find(a[i])==set.end())
	        {
	            v.push_back(a[i]);
	        }
	    }
	    return v;
	    
	    
	} 
};
	

// { Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends