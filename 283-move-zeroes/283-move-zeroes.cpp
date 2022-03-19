class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        
            
            int i=0,j=0,n = arr.size();
            while(i<n)
            {
                    if(arr[i]!=0)
                    {
                            swap(arr[i],arr[j]);
                            i++;
                            j++;
                    }
                    else{
                            i++;
                    }
            }
    }
};