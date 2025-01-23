class Solution
{
    public:
        int countServers(vector<vector < int>> &grid)
        {
            int m = grid.size(), n = grid[0].size();

            vector<int> rowcount(m);
            vector<int> colcount(n);

            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (grid[i][j] == 1)
                    {
                        rowcount[i]++;
                        colcount[j]++;
                    }
                }
            }

            int result = 0;
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (grid[i][j] == 1 && (rowcount[i] > 1 || colcount[j] > 1))
                    {
                        result++;
                    }
                }
            }
            return result;
        }
};