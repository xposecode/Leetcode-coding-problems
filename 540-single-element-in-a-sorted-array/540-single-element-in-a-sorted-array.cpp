class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        
            /* 
            Using mapping:
Time complexity: O(n)
Space complexity: O(n)

            unordered_map<int,int>map;
            int n=arr.size();
            for(int i=0;i<n;i++)
            {
                    map[arr[i]]++;
                    
            }
             for(int i=0;i<n;i++)
             {
                    if(map[arr[i]]==1)
                    {
                            return arr[i];
                    }
            }
            return -1;
            
            
            using iterator:
            
               for(auto it:mp){
            if(it.second==1){
                return it.first;
            }
           */
            
            //Using the XOR:
            //Time complexity: O(n)
            //Space complexity: O(1)
            int n=arr.size();
            int ans=0;
            for(int i=0;i<n;i++)
            {
                    ans= ans ^ arr[i];
            }
            return ans;
          
    }
};