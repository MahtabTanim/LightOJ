// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
int main()
{
	int t;
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		double x[3];
		cin>>x[0]>>x[1]>>x[2];
		sort(x,x+3);
		double a,b;
		a=(x[0]*x[0])+(x[1]*x[1]);
		b=x[2]*x[2];
		cout<<"Case "<<z<<": ";
		if(a==b) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}

End;
}

