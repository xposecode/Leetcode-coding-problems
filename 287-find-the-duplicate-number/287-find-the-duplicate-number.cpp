class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
//             int ans=0;
            
//             map<int,int>map;
//             int n=nums.size();
//             for(int i=0;i<n;i++)
//             {
//                     map[nums[i]]++;
//             }
//             for(int i=0;i<n;i++)
//             {
//                     if(map[nums[i]]>1)
//                     {
//                            ans=nums[i];
//                     }
//             }
//             return ans;
            int low = 1, high = nums.size() - 1, cnt;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            // cnt number less than equal to mid
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
            // binary search on left
            if(cnt <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;
            
        }
        return low;
    
    }
};