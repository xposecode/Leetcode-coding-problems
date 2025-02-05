class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        const int n = s1.size();
        int count=0;

        array<char,2>D={0};
        for(int i=0;i<n && count<=2;i++)
        {
            char x=s1[i],y=s2[i];
            if(x!=y){
                count++;
                if(count>2 || (count==2 && (D[0]!=y || D[1]!=x)))
                    return 0;
                D={x,y};
            }
        }
        return count ==0 || count==2;
    }
};