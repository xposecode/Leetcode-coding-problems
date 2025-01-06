class Solution
{
    public:
        int waysToSplitArray(vector<int> &nums)
        {
            int n = nums.size();
            long long total_sum = 0, prefix_sum = 0;

           	// Calculate the total sum of the array
            for (int num: nums)
            {
                total_sum += num;
            }

            int valid_splits = 0;

           	// Iterate through the array to check valid splits
            for (int i = 0; i < n - 1; ++i)
            {
                prefix_sum += nums[i];	// Update prefix sum
                long long right_sum = total_sum - prefix_sum;	// Calculate right sum

                if (prefix_sum >= right_sum)
                {
                    valid_splits++;
                }
            }

            return valid_splits;
        }
};