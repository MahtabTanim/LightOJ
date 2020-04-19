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
int z=1;
while(t--)
{
	int n;
	cin>>n;
	string s="";
	int count=0;
	while(n>0)
	{
		if(n%2) count++;
		n=n/2;
	}
	if(count%2) cout<<"Case "<<z<<": odd"<<endl;
	else cout<<"Case "<<z<<": even"<<endl;
	z++;
}
End;
}

