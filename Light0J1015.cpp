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
	int n,k,i,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k>0) sum+=k;
	}
	cout<<"Case "<<z<<": "<<sum<<endl;
}
End;
}

