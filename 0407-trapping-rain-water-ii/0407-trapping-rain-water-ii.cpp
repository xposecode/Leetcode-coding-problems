#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size(), n = heightMap[0].size();
        if (m < 3 || n < 3) return 0; // Minimum dimensions required to trap water

        // Min-Heap to process cells in increasing height order
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> minHeap;
        vector<vector<bool>> visited(m, vector<bool>(n, false)); // To mark processed cells

        // Push all boundary cells into the Min-Heap
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                    minHeap.push({heightMap[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }

        // Directions for moving up, down, left, right
        vector<int> dirX = {0, 0, 1, -1};
        vector<int> dirY = {1, -1, 0, 0};

        int water = 0; // Total trapped water

        // Process cells from the Min-Heap
        while (!minHeap.empty()) {
            auto [height, cell] = minHeap.top();
            minHeap.pop();
            int x = cell.first, y = cell.second;

            // Explore all 4 adjacent cells
            for (int d = 0; d < 4; d++) {
                int nx = x + dirX[d], ny = y + dirY[d];
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny]) {
                    // Water trapped is based on current boundary height
                    water += max(0, height - heightMap[nx][ny]);

                    // Update adjacent cell height and push into the heap
                    minHeap.push({max(height, heightMap[nx][ny]), {nx, ny}});
                    visited[nx][ny] = true;
                }
            }
        }

        return water; // Return the total trapped water
    }
};
