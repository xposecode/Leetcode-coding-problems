// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
        //Your code here
        int rem=0;
        
        for(auto i:n)
        {
            rem= rem*10 + (i-'0');
            rem= rem%7;
        }
        return rem;
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}  // } Driver Code Ends