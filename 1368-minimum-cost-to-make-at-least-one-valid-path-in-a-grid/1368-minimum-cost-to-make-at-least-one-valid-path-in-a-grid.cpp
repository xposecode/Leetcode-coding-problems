#include <vector>
#include <deque>
#include <array>
using namespace std;

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, INT_MAX)); // Minimum cost track karne ke liye

        // Direction mappings: 1 → Right, 2 → Left, 3 → Down, 4 → Up
        array<int, 5> dx = {0, 0, 0, 1, -1};
        array<int, 5> dy = {0, 1, -1, 0, 0};
        
        deque<pair<int, int>> dq; // {cost, position}
        dq.push_front({0, 0});    // Start from (0, 0) with cost 0
        visited[0][0] = 0;
        
        while (!dq.empty()) {
            auto [cost, pos] = dq.front(); // Current cost and position
            dq.pop_front();
            
            int x = pos / n, y = pos % n; // Current cell
            if (x == m - 1 && y == n - 1) return cost; // Destination reached
            
            // Har direction ko check karo
            for (int d = 1; d <= 4; ++d) {
                int nx = x + dx[d], ny = y + dy[d]; // Next cell
                int newCost = cost + (grid[x][y] != d); // Agar direction alag hai, toh cost 1 add hoga

                // Validity check aur minimum cost update
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && newCost < visited[nx][ny]) {
                    visited[nx][ny] = newCost;
                    if (grid[x][y] == d) dq.push_front({newCost, nx * n + ny}); // Cost 0 cells ko front mein
                    else dq.push_back({newCost, nx * n + ny}); // Cost 1 cells ko back mein
                }
            }
        }
        
        return -1; // Agar yaha aaye toh valid path possible nahi
    }
};
