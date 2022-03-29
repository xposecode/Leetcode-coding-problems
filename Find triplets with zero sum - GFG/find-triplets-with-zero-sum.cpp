// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        // sort(arr,arr+n);    //-3 -1  0  1  2
        
        // for(int i=0;i<n;i++)
        // {
        //     int left=i+1;   
        //     int right=n-1;
            
        //     while(left<right)
        //     {
        //         if(arr[i]+arr[left]+arr[right]==0)
        //         {
        //             return true;
        //         }
        //         else if(arr[i]+arr[left]+arr[right]>0)
        //         {
        //             right--;
        //         }
        //         else{
        //             left++;
        //         }
        //     }
        //     return false;
        // }
        sort(arr, arr+n);
       
       for(int i = 0; i < n; i++)
       {
           int left = i+1;
           int right = n-1;
           
           while(left < right)
           {
               if(arr[i] + arr[left] + arr[right] == 0)
               {
                   return true;
               }    
               else if(arr[i] + arr[left] + arr[right] > 0)
                   right--;
               else
                   left++;
           }
       }
       return false;
   
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends