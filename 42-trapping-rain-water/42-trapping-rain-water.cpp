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
                
        // Time Complexity: O(n)        
        
           	// initialize output
            int result = 0;

           	// maximum element on left and right
            int left = 0, right = 0;

            int n = arr.size();
           	// indices to traverse the array
            int start = 0, end = n - 1;

            while (start <= end)
            {
                if (arr[start] < arr[end])
                {
                    if (arr[start] > left)
                       	// update max in left
                        left = arr[start];
                    else
                       	// water on curr element = max - curr
                        result += left - arr[start];
                    start++;
                }
                else
                {
                    if (arr[end] > right)
                       	// update right maximum
                        right = arr[end];
                    else
                        result += right - arr[end];
                    end--;
                }
            }

            return result;
        }
};