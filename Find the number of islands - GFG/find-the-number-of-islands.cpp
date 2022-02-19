// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
        // Code here
        void dfs(vector<vector<char>>& grid,int i,int j,int n,int m){
        
        if(i<0 || j<0 || i>n-1 || j>m-1) 
        return;
        if(grid[i][j]=='0') 
        return;
        grid[i][j]='0';
        dfs(grid,i-1,j,n,m);
        dfs(grid,i+1,j,n,m);
        dfs(grid,i,j-1,n,m);
        dfs(grid,i,j+1,n,m);
        dfs(grid,i-1,j-1,n,m);
        dfs(grid,i-1,j+1,n,m);
        dfs(grid,i+1,j-1,n,m);
        dfs(grid,i+1,j+1,n,m);
    }
  int numIslands(vector<vector<char>>& grid) {
        // Code here
        int island=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    island++;
                    dfs(grid,i,j,n,m);
                }
            }
        }
        return island;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends