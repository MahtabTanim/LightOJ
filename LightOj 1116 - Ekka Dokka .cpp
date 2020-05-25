#include<bits/stdc++.h>
using namespace std;
/*
tcase= 3

10	Case 1: 5 2

5	Case 2: Impossible

12	Case 3: 3 4

*/
int main()
{ 
	int t,tcase=0;
	cin>>t;
	while(t--)
	{

		long long  w;
		cin>>w;
		cout<<"Case "<<++tcase<<": ";
		if(w%2) cout<<"Impossible"<<endl;
		else 
		{
			long long m,n;
			for(long long i=2;i<=w;i+=2)
			{
				long long d=w/i;
				if(d%2) {m=i,n=d; if(m*n==w)break;}
			}
			cout<<n<<" "<<m<<endl;
		}
	}
return 0;
}
