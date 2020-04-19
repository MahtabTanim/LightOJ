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
	long long n;
	cin>>n;
	cout<<"Case "<<z<<": ";
	if(n%2==0 ) {
		if(n%4==0)
		{
			long long a,b;
			a=n/4,b=4;
			while(a%2==0)
			{
				a=a/2;
				b=b*2;
			}
			cout<<a<<" "<<b<<endl;
		}
		else{
			cout<<n/2<<" "<<2<<endl;
		}
		
	}
	else cout<<"Impossible"<<endl;
	z++;
}
End;
}

