class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        
            
            unordered_map<int,int>map;
            int n=arr.size();
            for(int i=0;i<n;i++)
            {
                    map[arr[i]]++;
                    
            }
             for(int i=0;i<n;i++)
             {
                    int pp= i;
                    if(map[arr[i]]==1)
                    {
                            return arr[i];
                    }
            }
            return -1;
          
    }
};