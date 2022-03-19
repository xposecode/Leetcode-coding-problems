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

/* Let's dry run using arr=[0,1,0,3,12]

i: 1 2 3 4
j: 0 1 1 2

1,0,0,3,12

1,3,0,0,12

1,3,12,0,0

*/
