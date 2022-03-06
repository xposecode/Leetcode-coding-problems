class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
            
            set<int>set;          //Using a set
            int n= nums.size();     
            for(int i=0;i<n;i++)
            {
                    set.insert(nums[i]);            // Inserting the values in the set
            }
          
            int i=0;
            for(auto a: set)
            {
                    nums[i]=a;   
                    i++;
            }
            return set.size();
            
    }
        
};