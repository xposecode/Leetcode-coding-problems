class Solution {
public:
    bool isSubsequence(string s, string t) {
        
            int i=0,j=0;
            int s_size=s.size();
            int t_size=t.size();
            
            while(i<s_size && j<t_size)
            {
                    if(s[i]==t[j])
                    {
                            i++;
                    }
                            j++;
            }
            if(i==s_size)
            {
                    return true;
            }
            else{
                    return false;
            }
    }
};