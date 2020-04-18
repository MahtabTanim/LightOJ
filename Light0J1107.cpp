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
		int x1,y1,x2,y2;
		int m;
		cin>>x1>>y1>>x2>>y2;
		cin>>m;
		int a,b;
		cout<<"Case "<<z<<": "<<endl;
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			if(a>=x1&&a<=x2&&b>=y1&&b<=y2) cout<<"Yes"<<nl;
			else cout<<"No"<<nl;
		}
	}

End;
}

