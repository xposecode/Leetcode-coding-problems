#User function Template for python3

class Solution:
    ##Complete this function
    def ternarySearch(self,arr,N,k):
        #Your code here
        for i in range(len(arr)):
            if(arr[i]==k):
                return 1;
            
        return -1;
#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math
if __name__ == '__main__': 
	t = int(input())
	for _ in range(t):
		NK = input().strip().split()
		N = int(NK[0])
		K = int(NK[1])
		arr = [ int(x) for x in input().strip().split() ]
		ob=Solution()
		print(ob.ternarySearch(arr,N,K))

# } Driver Code Ends