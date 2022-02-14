#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;     // t=3
	while(t--)
	{
	    int A,B,C,N,x;
	    cin>>A>>B>>C>>N; // A=1 B=3 C=2 N=4
	    N=N-3;           // N=4-3=1
	    while(N--){
	        x= A+B+C;    // x=6
	        A=B;         //A=3
	        B=C;         //B=2
	        C=x;         //C=6
	    }
	    cout<<x<<endl;    // 6
	}
	return 0;
}