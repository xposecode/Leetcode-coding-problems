class Solution
{
    public:
        vector<int> minOperations(string boxes)
        {
            int n = boxes.size();
            vector<int> ans(n, 0);
            int operations = 0, balls = 0;

            for (int i = 0; i < n; i++)
            {
                ans[i] = ans[i] + operations;
                if (boxes[i] == '1')
                {
                    balls++;
                }
                operations = operations + balls;
            }

            operations = 0, balls = 0;

            for (int i = n - 1; i >= 0; i--)
            {
                ans[i] = ans[i] + operations;
                if (boxes[i] == '1')
                {
                    balls++;
                }
                operations = operations + balls;
            }
            return ans;
        }
};