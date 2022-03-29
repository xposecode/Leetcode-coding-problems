// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string str)
{
    // code here
    stack<char>s;
    int n=str.length();

    for (int i = 0; i < n; i++)
    {
        char ch=str[i];

        //if opening bracket, Stack push
        //if close bracket, Stacktop check & pop

        if (ch == '{' || ch =='(' || ch=='[')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top= s.top();

                if (ch==')' && top=='(' || ch=='}' && top=='{' ||
                ch==']' && top=='[')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            // else{
            //     return false;
            // }
        }
    }
        if (s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        // return s.empty();
}
