// { Driver Code Starts
//Initial Template for Java

//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            String str[] = read.readLine().trim().split("\\s+");
            int r = Integer.parseInt(str[0]);
            int c = Integer.parseInt(str[1]);
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                int k = 0;
                str = read.readLine().trim().split("\\s+");
                for(int j = 0; j < c; j++){
                  matrix[i][j] = Integer.parseInt(str[k]);
                  k++;
                }
            }
            Solution obj = new Solution();
            int[] p = obj.endPoints(matrix,r,c);
            System.out.print("(" +  p[0]+ ", " +  p[1]+ ")" +"\n");
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    static int [] endPoints(int [][]arr, int m, int n){
        //code here
        char dir='R';
        int i=0,j=0;
        while(i>=0 && j>=0 && i<m && j<n){
            if(arr[i][j]==0){
                if(dir=='L'){
                    j--;
                }
                else if(dir=='R'){
                    j++;
                }
                else if(dir=='U'){
                    i--;
                }
                else if(dir=='D'){
                    i++;
                }
            }
            else{
                arr[i][j]=0;
                if(dir=='R'){
                    dir='D';
                }
                else if(dir=='L'){
                    dir='U';
                }
                else if(dir=='U'){
                    dir='R';
                }
                else if(dir=='D'){
                    dir='L';
                }
            }
        }
        int ans[]=new int[2];
        if(dir=='L'){
            ans[0]=i;
            ans[1]=j+1;
        }
        else if(dir=='R'){
            ans[0]=i;
            ans[1]=j-1;          
        }
        else if(dir=='U'){
            ans[0]=i+1;
            ans[1]=j;         
        }
        else if(dir=='D'){
            ans[0]=i-1;
            ans[1]=j;
        }
        return ans;

    }
}