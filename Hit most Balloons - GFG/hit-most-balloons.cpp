// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int mostBalloons(int N, pair<int, int> arr[]) {
        // Code here
        
        
        int maxi = 0;
        map<pair<int,int> ,int>mp1;
        for(int i = 0 ; i < N ; i++){
            mp1[arr[i]]++;
        }
        vector<pair<int,int>>vec;
        for(auto it : mp1){
            vec.push_back(it.first);
        }
        for(int i = 0 ; i < vec.size() ;i++){
            map<pair<int,int> ,int>mp;
            for(int j = i + 1 ; j < vec.size() ;j++){
                int num = vec[i].second - vec[j].second;
                int deno = vec[i].first - vec[j].first;
                int gcd = __gcd(num , deno);
                num /= gcd , deno /= gcd;
                
                if((num <= 0 && deno <= 0) || (num >= 0 && deno >= 0))
                mp[{abs(num) , abs(deno)}] += mp1[vec[j]];
                else{
                    mp[{-abs(num) , abs(deno)}] += mp1[vec[j]];
                }
            }
           
            for(auto it : mp){
                maxi = max(maxi , it.second + mp1[vec[i]]);
            }
        }
        return maxi  ;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        pair<int, int> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
        }
        for (int i = 0; i < N; i++) {
            cin >> arr[i].second;
        }
        Solution ob;
        cout << ob.mostBalloons(N, arr) << endl;
    }
}  // } Driver Code Ends