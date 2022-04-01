class Solution {
public:
    void reverseString(vector<char>& s) {
        
            //1st approach
            int n= s.size();
            // int i=0,end=n-1;
            // while(i<end)
            // {
            //         swap(s[i],s[end]);
            //         i++;
            //         end--;
            // }
            //2nd approach
            reverse(s.begin(),s.end());
            
    }
        
};