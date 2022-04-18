class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
            int ans=0;
            
            map<int,int>map;
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                    map[nums[i]]++;
            }
            for(int i=0;i<n;i++)
            {
                    if(map[nums[i]]>1)
                    {
                           ans=nums[i];
                    }
            }
            return ans;
    }
};