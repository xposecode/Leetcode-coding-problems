class Solution
{
    public:
        int trap(vector<int> &arr)
        {

            /*
                Time complexity: O(n^2)

            int ans = 0;
            int n = arr.size();

           	// For every element of the array
            for (int i = 1; i < n - 1; i++)
            {
               	// Find the maximum element on its left
                int left = arr[i];
                for (int j = 0; j < i; j++)
                {

                    left = max(left, arr[j]);
                }

               	// Find the maximum element on its right  
                int right = arr[i];
                for (int j = i + 1; j < n; j++)
                {

                    right = max(right, arr[j]);
                }

               	// Update the maximum water 
                ans = ans + (min(left, right) - arr[i]);
            }
            return ans;
            */
           	// initialize output
            int result = 0;

           	// maximum element on left and right
            int left_max = 0, right_max = 0;

            int n = arr.size();
           	// indices to traverse the array
            int lo = 0, hi = n - 1;

            while (lo <= hi)
            {
                if (arr[lo] < arr[hi])
                {
                    if (arr[lo] > left_max)
                       	// update max in left
                        left_max = arr[lo];
                    else
                       	// water on curr element = max - curr
                        result += left_max - arr[lo];
                    lo++;
                }
                else
                {
                    if (arr[hi] > right_max)
                       	// update right maximum
                        right_max = arr[hi];
                    else
                        result += right_max - arr[hi];
                    hi--;
                }
            }

            return result;
        }
};