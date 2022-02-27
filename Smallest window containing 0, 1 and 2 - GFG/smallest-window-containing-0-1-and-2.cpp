// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
    //     int x=0;
    //     int y=0;
    //     int z=0;
    //     int n = s.size();
    //     int res=n+1;
        
    //     int i=0,j=0;
    //     while(1){
    //         bool p=true;
    //         bool q=true;
           
    //     while(i<n  && (x==0 || y==0 || z==0))
    //     {
    //     p=false;    
    //     if(s[i]=='0')
    //         {
    //             x++;
    //         }
    //     else if(s[i]=='1') y++;
    //     else z++;
        
    //     i++;
    //     }
    //     while(j<i && j<n && (x>0 && y>0 && z>0))
    //     {
    //         q=false;
    //         res= min(res,i-j);
    //         if(s[i]=='0')
    //         {
    //             x--;
    //         }
    //         else if(s[j]=='1') y--;
    //         else z--;
    //         j++;
    //     }
    //     if(p && q)
    //     {
    //         break;
    //     }
    //     }
    // if(res==n+1) return -1;
    
    // return res;
    // }
    int n = S.size();
        int i= 0 , j = 0;
        
        int a=0,b=0,c=0;
        
        int ans = n+1;
        while(1){
            bool f1 = true;
            bool f2 = true;
            while(i < n && ( a == 0 || b == 0 || c == 0 )){
               
                f1 =false;
                if(S[i] == '0'){
                    a++;
                }
                else if(S[i] == '1') b++;
                else c++;
                
                i++;
            }
            while( j < i  && j < n &&  ( a > 0 && b > 0 && c > 0 )  ){
                //cout<<i << " "<<j<<endl;
                f2 = false;
                ans = min( ans , i - j );
                if(S[j] == '0'){
                    a--;
                }
                else if(S[j] == '1') b--;
                else c--;
                
                j++;
                
            }
            
            
            
            if(f1 && f2) {
                break;
            }
        }
        
        if(ans == n+1 )return -1;
        
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends