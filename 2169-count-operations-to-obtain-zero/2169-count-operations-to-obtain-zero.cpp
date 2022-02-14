class Solution {
public:
    int countOperations(int num1, int num2) {
        
            
  int sub = 0;
  // if (num1 == num2)
  // 	return 1;
  while(num1 != 0 && num2 !=0)
  {
  	if (num1 >= num2)
        {
                        
                num1 = num1 - num2;
  		sub++;
                }
  	
  	 else if(num1<num2) {
                num2 = num2 - num1;      
  		sub++;
                }
  	}   
            return sub;
    }
};